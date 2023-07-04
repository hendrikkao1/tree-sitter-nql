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
#define STATE_COUNT 212
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
  [7] = 5,
  [8] = 8,
  [9] = 6,
  [10] = 10,
  [11] = 11,
  [12] = 8,
  [13] = 10,
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
  [45] = 39,
  [46] = 46,
  [47] = 39,
  [48] = 48,
  [49] = 46,
  [50] = 50,
  [51] = 46,
  [52] = 52,
  [53] = 38,
  [54] = 54,
  [55] = 41,
  [56] = 30,
  [57] = 41,
  [58] = 50,
  [59] = 36,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 37,
  [66] = 50,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 43,
  [71] = 44,
  [72] = 72,
  [73] = 64,
  [74] = 48,
  [75] = 31,
  [76] = 76,
  [77] = 40,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 64,
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
  [94] = 89,
  [95] = 81,
  [96] = 96,
  [97] = 90,
  [98] = 98,
  [99] = 96,
  [100] = 100,
  [101] = 80,
  [102] = 102,
  [103] = 103,
  [104] = 88,
  [105] = 91,
  [106] = 106,
  [107] = 107,
  [108] = 87,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 111,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 112,
  [124] = 124,
  [125] = 124,
  [126] = 121,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 120,
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
  [188] = 176,
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
  [199] = 197,
  [200] = 200,
  [201] = 201,
  [202] = 172,
  [203] = 173,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(262);
      if (lookahead == '!') ADVANCE(116);
      if (lookahead == '"') ADVANCE(329);
      if (lookahead == '\'') ADVANCE(330);
      if (lookahead == '(') ADVANCE(287);
      if (lookahead == ')') ADVANCE(288);
      if (lookahead == '*') ADVANCE(404);
      if (lookahead == '+') ADVANCE(401);
      if (lookahead == ',') ADVANCE(278);
      if (lookahead == '-') ADVANCE(402);
      if (lookahead == '.') ADVANCE(295);
      if (lookahead == '/') ADVANCE(403);
      if (lookahead == '<') ADVANCE(409);
      if (lookahead == '=') ADVANCE(399);
      if (lookahead == '>') ADVANCE(407);
      if (lookahead == 'B') ADVANCE(373);
      if (lookahead == 'G') ADVANCE(117);
      if (lookahead == 'K') ADVANCE(118);
      if (lookahead == 'M') ADVANCE(119);
      if (lookahead == 'T') ADVANCE(120);
      if (lookahead == '[') ADVANCE(283);
      if (lookahead == '\\') ADVANCE(333);
      if (lookahead == ']') ADVANCE(285);
      if (lookahead == 'a') ADVANCE(71);
      if (lookahead == 'b') ADVANCE(74);
      if (lookahead == 'c') ADVANCE(72);
      if (lookahead == 'd') ADVANCE(386);
      if (lookahead == 'e') ADVANCE(77);
      if (lookahead == 'f') ADVANCE(69);
      if (lookahead == 'h') ADVANCE(384);
      if (lookahead == 'i') ADVANCE(164);
      if (lookahead == 'l') ADVANCE(125);
      if (lookahead == 'm') ADVANCE(126);
      if (lookahead == 'o') ADVANCE(166);
      if (lookahead == 's') ADVANCE(380);
      if (lookahead == 't') ADVANCE(173);
      if (lookahead == 'v') ADVANCE(212);
      if (lookahead == 'w') ADVANCE(147);
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
      if (lookahead == 'c') ADVANCE(174);
      if (lookahead == 'i') ADVANCE(169);
      if (lookahead == 'l') ADVANCE(152);
      if (lookahead == 's') ADVANCE(175);
      if (lookahead == 'w') ADVANCE(149);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(234);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(257);
      if (lookahead != 0) ADVANCE(259);
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
      if (lookahead == 'c') ADVANCE(176);
      if (lookahead == 'i') ADVANCE(170);
      if (lookahead == 'l') ADVANCE(153);
      if (lookahead == 's') ADVANCE(177);
      if (lookahead == 'w') ADVANCE(150);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(231);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      if (lookahead != 0) ADVANCE(258);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(55)
      if (lookahead == '"') ADVANCE(329);
      if (lookahead == '\\') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(334);
      if (lookahead != 0) ADVANCE(335);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(56)
      if (lookahead == '\'') ADVANCE(330);
      if (lookahead == '\\') ADVANCE(333);
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
      if (lookahead != 0) ADVANCE(259);
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(11)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(10);
      if (lookahead != 0) ADVANCE(258);
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
      if (lookahead == ' ') ADVANCE(207);
      if (lookahead == ':') ADVANCE(244);
      END_STATE();
    case 22:
      if (lookahead == ' ') ADVANCE(180);
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
      if (lookahead == ' ') ADVANCE(220);
      END_STATE();
    case 36:
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead == 'h') ADVANCE(289);
      END_STATE();
    case 37:
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead == 'i') ADVANCE(197);
      END_STATE();
    case 38:
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead == 'l') ADVANCE(201);
      END_STATE();
    case 39:
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead == 'm') ADVANCE(128);
      END_STATE();
    case 40:
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead == 'p') ADVANCE(203);
      END_STATE();
    case 41:
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead == 'r') ADVANCE(138);
      END_STATE();
    case 42:
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead == 't') ADVANCE(277);
      END_STATE();
    case 43:
      if (lookahead == ' ') ADVANCE(220);
      if (lookahead == 't') ADVANCE(279);
      END_STATE();
    case 44:
      if (lookahead == ' ') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      END_STATE();
    case 45:
      if (lookahead == ' ') ADVANCE(221);
      END_STATE();
    case 46:
      if (lookahead == ' ') ADVANCE(232);
      END_STATE();
    case 47:
      if (lookahead == ' ') ADVANCE(251);
      END_STATE();
    case 48:
      if (lookahead == ' ') ADVANCE(210);
      END_STATE();
    case 49:
      if (lookahead == ' ') ADVANCE(249);
      END_STATE();
    case 50:
      if (lookahead == ' ') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(358);
      END_STATE();
    case 51:
      if (lookahead == ' ') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(360);
      END_STATE();
    case 52:
      if (lookahead == ' ') ADVANCE(252);
      END_STATE();
    case 53:
      if (lookahead == '"') ADVANCE(329);
      if (lookahead == '\'') ADVANCE(330);
      if (lookahead == '[') ADVANCE(284);
      if (lookahead == 'f') ADVANCE(263);
      if (lookahead == 't') ADVANCE(271);
      if (lookahead == 'v') ADVANCE(274);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(53)
      if (('a' <= lookahead && lookahead <= 'e')) ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(338);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 54:
      if (lookahead == '"') ADVANCE(329);
      if (lookahead == '\'') ADVANCE(330);
      if (lookahead == 'f') ADVANCE(263);
      if (lookahead == 't') ADVANCE(271);
      if (lookahead == 'v') ADVANCE(274);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(54)
      if (('a' <= lookahead && lookahead <= 'e')) ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(338);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 55:
      if (lookahead == '"') ADVANCE(329);
      if (lookahead == '\\') ADVANCE(333);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(55)
      END_STATE();
    case 56:
      if (lookahead == '\'') ADVANCE(330);
      if (lookahead == '\\') ADVANCE(333);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(341);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 58:
      if (lookahead == '(') ADVANCE(286);
      if (lookahead == 'a') ADVANCE(308);
      if (lookahead == 'c') ADVANCE(302);
      if (lookahead == 'l') ADVANCE(296);
      if (lookahead == 'm') ADVANCE(297);
      if (lookahead == 's') ADVANCE(306);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(58)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 59:
      if (lookahead == '(') ADVANCE(286);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(59)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(341);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 60:
      if (lookahead == ')') ADVANCE(430);
      END_STATE();
    case 61:
      if (lookahead == '-') ADVANCE(236);
      END_STATE();
    case 62:
      if (lookahead == '-') ADVANCE(237);
      END_STATE();
    case 63:
      if (lookahead == '.') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 64:
      if (lookahead == '.') ADVANCE(216);
      END_STATE();
    case 65:
      if (lookahead == '.') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 66:
      if (lookahead == '.') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      END_STATE();
    case 67:
      if (lookahead == '/') ADVANCE(217);
      END_STATE();
    case 68:
      if (lookahead == ':') ADVANCE(254);
      END_STATE();
    case 69:
      if (lookahead == ':') ADVANCE(254);
      if (lookahead == 'a') ADVANCE(70);
      if (lookahead == 'r') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(76);
      END_STATE();
    case 70:
      if (lookahead == ':') ADVANCE(254);
      if (lookahead == 'l') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(75);
      END_STATE();
    case 71:
      if (lookahead == ':') ADVANCE(254);
      if (lookahead == 'n') ADVANCE(133);
      if (lookahead == 's') ADVANCE(130);
      if (lookahead == 'v') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(76);
      END_STATE();
    case 72:
      if (lookahead == ':') ADVANCE(254);
      if (lookahead == 'o') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(76);
      END_STATE();
    case 73:
      if (lookahead == ':') ADVANCE(254);
      if (lookahead == 's') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(75);
      END_STATE();
    case 74:
      if (lookahead == ':') ADVANCE(254);
      if (lookahead == 'y') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(76);
      END_STATE();
    case 75:
      if (lookahead == ':') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(68);
      END_STATE();
    case 76:
      if (lookahead == ':') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(75);
      END_STATE();
    case 77:
      if (lookahead == ':') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(76);
      END_STATE();
    case 78:
      if (lookahead == ':') ADVANCE(67);
      END_STATE();
    case 79:
      if (lookahead == ':') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(395);
      END_STATE();
    case 80:
      if (lookahead == ':') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(95);
      END_STATE();
    case 81:
      if (lookahead == ':') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(98);
      END_STATE();
    case 82:
      if (lookahead == ':') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(110);
      END_STATE();
    case 83:
      if (lookahead == ':') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(114);
      END_STATE();
    case 84:
      if (lookahead == ':') ADVANCE(253);
      END_STATE();
    case 85:
      if (lookahead == ':') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(84);
      END_STATE();
    case 86:
      if (lookahead == ':') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(85);
      END_STATE();
    case 87:
      if (lookahead == ':') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(86);
      END_STATE();
    case 88:
      if (lookahead == ':') ADVANCE(83);
      END_STATE();
    case 89:
      if (lookahead == ':') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(88);
      END_STATE();
    case 90:
      if (lookahead == ':') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(89);
      END_STATE();
    case 91:
      if (lookahead == ':') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(90);
      END_STATE();
    case 92:
      if (lookahead == ':') ADVANCE(79);
      END_STATE();
    case 93:
      if (lookahead == ':') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(94);
      END_STATE();
    case 94:
      if (lookahead == ':') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(92);
      END_STATE();
    case 95:
      if (lookahead == ':') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(93);
      END_STATE();
    case 96:
      if (lookahead == ':') ADVANCE(80);
      END_STATE();
    case 97:
      if (lookahead == ':') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(99);
      END_STATE();
    case 98:
      if (lookahead == ':') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(97);
      END_STATE();
    case 99:
      if (lookahead == ':') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(96);
      END_STATE();
    case 100:
      if (lookahead == ':') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      END_STATE();
    case 101:
      if (lookahead == ':') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      END_STATE();
    case 102:
      if (lookahead == ':') ADVANCE(240);
      END_STATE();
    case 103:
      if (lookahead == ':') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      END_STATE();
    case 104:
      if (lookahead == ':') ADVANCE(241);
      END_STATE();
    case 105:
      if (lookahead == ':') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      END_STATE();
    case 106:
      if (lookahead == ':') ADVANCE(242);
      END_STATE();
    case 107:
      if (lookahead == ':') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      END_STATE();
    case 108:
      if (lookahead == ':') ADVANCE(81);
      END_STATE();
    case 109:
      if (lookahead == ':') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(111);
      END_STATE();
    case 110:
      if (lookahead == ':') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      END_STATE();
    case 111:
      if (lookahead == ':') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(108);
      END_STATE();
    case 112:
      if (lookahead == ':') ADVANCE(82);
      END_STATE();
    case 113:
      if (lookahead == ':') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(115);
      END_STATE();
    case 114:
      if (lookahead == ':') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(113);
      END_STATE();
    case 115:
      if (lookahead == ':') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(112);
      END_STATE();
    case 116:
      if (lookahead == '=') ADVANCE(406);
      if (lookahead == 'i') ADVANCE(167);
      END_STATE();
    case 117:
      if (lookahead == 'B') ADVANCE(376);
      END_STATE();
    case 118:
      if (lookahead == 'B') ADVANCE(374);
      END_STATE();
    case 119:
      if (lookahead == 'B') ADVANCE(375);
      END_STATE();
    case 120:
      if (lookahead == 'B') ADVANCE(377);
      END_STATE();
    case 121:
      if (lookahead == 'M') ADVANCE(371);
      END_STATE();
    case 122:
      if (lookahead == 'M') ADVANCE(369);
      END_STATE();
    case 123:
      if (lookahead == 'M') ADVANCE(372);
      END_STATE();
    case 124:
      if (lookahead == 'M') ADVANCE(370);
      END_STATE();
    case 125:
      if (lookahead == 'a') ADVANCE(189);
      if (lookahead == 'i') ADVANCE(163);
      END_STATE();
    case 126:
      if (lookahead == 'a') ADVANCE(204);
      if (lookahead == 'i') ADVANCE(168);
      if (lookahead == 's') ADVANCE(378);
      END_STATE();
    case 127:
      if (lookahead == 'a') ADVANCE(324);
      if (lookahead == 'c') ADVANCE(318);
      if (lookahead == 'l') ADVANCE(312);
      if (lookahead == 'm') ADVANCE(313);
      if (lookahead == 's') ADVANCE(322);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(127)
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 128:
      if (lookahead == 'a') ADVANCE(184);
      END_STATE();
    case 129:
      if (lookahead == 'a') ADVANCE(191);
      END_STATE();
    case 130:
      if (lookahead == 'c') ADVANCE(327);
      END_STATE();
    case 131:
      if (lookahead == 'c') ADVANCE(328);
      END_STATE();
    case 132:
      if (lookahead == 'c') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(49);
      END_STATE();
    case 133:
      if (lookahead == 'd') ADVANCE(413);
      END_STATE();
    case 134:
      if (lookahead == 'd') ADVANCE(385);
      if (lookahead == 'h') ADVANCE(384);
      if (lookahead == 'm') ADVANCE(154);
      if (lookahead == 's') ADVANCE(379);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(134)
      END_STATE();
    case 135:
      if (lookahead == 'd') ADVANCE(142);
      END_STATE();
    case 136:
      if (lookahead == 'e') ADVANCE(346);
      END_STATE();
    case 137:
      if (lookahead == 'e') ADVANCE(348);
      END_STATE();
    case 138:
      if (lookahead == 'e') ADVANCE(282);
      END_STATE();
    case 139:
      if (lookahead == 'e') ADVANCE(281);
      END_STATE();
    case 140:
      if (lookahead == 'e') ADVANCE(280);
      END_STATE();
    case 141:
      if (lookahead == 'e') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(49);
      END_STATE();
    case 142:
      if (lookahead == 'e') ADVANCE(276);
      END_STATE();
    case 143:
      if (lookahead == 'e') ADVANCE(185);
      END_STATE();
    case 144:
      if (lookahead == 'e') ADVANCE(188);
      if (lookahead == 'u') ADVANCE(182);
      END_STATE();
    case 145:
      if (lookahead == 'g') ADVANCE(418);
      END_STATE();
    case 146:
      if (lookahead == 'g') ADVANCE(22);
      END_STATE();
    case 147:
      if (lookahead == 'h') ADVANCE(143);
      if (lookahead == 'i') ADVANCE(192);
      END_STATE();
    case 148:
      if (lookahead == 'h') ADVANCE(289);
      END_STATE();
    case 149:
      if (lookahead == 'h') ADVANCE(141);
      if (lookahead == 'i') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(260);
      END_STATE();
    case 150:
      if (lookahead == 'h') ADVANCE(24);
      if (lookahead == 'i') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(33);
      END_STATE();
    case 151:
      if (lookahead == 'i') ADVANCE(206);
      END_STATE();
    case 152:
      if (lookahead == 'i') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(260);
      END_STATE();
    case 153:
      if (lookahead == 'i') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(33);
      END_STATE();
    case 154:
      if (lookahead == 'i') ADVANCE(168);
      if (lookahead == 's') ADVANCE(378);
      END_STATE();
    case 155:
      if (lookahead == 'i') ADVANCE(171);
      END_STATE();
    case 156:
      if (lookahead == 'i') ADVANCE(197);
      END_STATE();
    case 157:
      if (lookahead == 'm') ADVANCE(179);
      if (lookahead == 'u') ADVANCE(172);
      END_STATE();
    case 158:
      if (lookahead == 'm') ADVANCE(421);
      END_STATE();
    case 159:
      if (lookahead == 'm') ADVANCE(292);
      END_STATE();
    case 160:
      if (lookahead == 'm') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(49);
      END_STATE();
    case 161:
      if (lookahead == 'm') ADVANCE(37);
      if (lookahead == 's') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(49);
      END_STATE();
    case 162:
      if (lookahead == 'm') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(49);
      END_STATE();
    case 163:
      if (lookahead == 'm') ADVANCE(156);
      if (lookahead == 's') ADVANCE(194);
      END_STATE();
    case 164:
      if (lookahead == 'n') ADVANCE(411);
      END_STATE();
    case 165:
      if (lookahead == 'n') ADVANCE(294);
      END_STATE();
    case 166:
      if (lookahead == 'n') ADVANCE(294);
      if (lookahead == 'r') ADVANCE(414);
      END_STATE();
    case 167:
      if (lookahead == 'n') ADVANCE(412);
      END_STATE();
    case 168:
      if (lookahead == 'n') ADVANCE(381);
      END_STATE();
    case 169:
      if (lookahead == 'n') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(260);
      END_STATE();
    case 170:
      if (lookahead == 'n') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(33);
      END_STATE();
    case 171:
      if (lookahead == 'n') ADVANCE(146);
      END_STATE();
    case 172:
      if (lookahead == 'n') ADVANCE(196);
      END_STATE();
    case 173:
      if (lookahead == 'o') ADVANCE(293);
      if (lookahead == 'r') ADVANCE(202);
      END_STATE();
    case 174:
      if (lookahead == 'o') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(260);
      END_STATE();
    case 175:
      if (lookahead == 'o') ADVANCE(183);
      if (lookahead == 'u') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(260);
      END_STATE();
    case 176:
      if (lookahead == 'o') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(33);
      END_STATE();
    case 177:
      if (lookahead == 'o') ADVANCE(28);
      if (lookahead == 'u') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(33);
      END_STATE();
    case 178:
      if (lookahead == 'o') ADVANCE(159);
      END_STATE();
    case 179:
      if (lookahead == 'p') ADVANCE(203);
      END_STATE();
    case 180:
      if (lookahead == 'p') ADVANCE(129);
      END_STATE();
    case 181:
      if (lookahead == 'r') ADVANCE(178);
      END_STATE();
    case 182:
      if (lookahead == 'r') ADVANCE(155);
      END_STATE();
    case 183:
      if (lookahead == 'r') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(49);
      END_STATE();
    case 184:
      if (lookahead == 'r') ADVANCE(151);
      END_STATE();
    case 185:
      if (lookahead == 'r') ADVANCE(138);
      END_STATE();
    case 186:
      if (lookahead == 'r') ADVANCE(195);
      END_STATE();
    case 187:
      if (lookahead == 's') ADVANCE(130);
      END_STATE();
    case 188:
      if (lookahead == 's') ADVANCE(131);
      END_STATE();
    case 189:
      if (lookahead == 's') ADVANCE(193);
      END_STATE();
    case 190:
      if (lookahead == 's') ADVANCE(137);
      END_STATE();
    case 191:
      if (lookahead == 's') ADVANCE(198);
      END_STATE();
    case 192:
      if (lookahead == 't') ADVANCE(148);
      END_STATE();
    case 193:
      if (lookahead == 't') ADVANCE(427);
      END_STATE();
    case 194:
      if (lookahead == 't') ADVANCE(277);
      END_STATE();
    case 195:
      if (lookahead == 't') ADVANCE(279);
      END_STATE();
    case 196:
      if (lookahead == 't') ADVANCE(415);
      END_STATE();
    case 197:
      if (lookahead == 't') ADVANCE(290);
      END_STATE();
    case 198:
      if (lookahead == 't') ADVANCE(291);
      END_STATE();
    case 199:
      if (lookahead == 't') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(49);
      END_STATE();
    case 200:
      if (lookahead == 't') ADVANCE(139);
      END_STATE();
    case 201:
      if (lookahead == 'u') ADVANCE(135);
      END_STATE();
    case 202:
      if (lookahead == 'u') ADVANCE(136);
      END_STATE();
    case 203:
      if (lookahead == 'u') ADVANCE(200);
      END_STATE();
    case 204:
      if (lookahead == 'x') ADVANCE(424);
      END_STATE();
    case 205:
      if (lookahead == 'y') ADVANCE(431);
      END_STATE();
    case 206:
      if (lookahead == 'z') ADVANCE(140);
      END_STATE();
    case 207:
      if (lookahead == 'A' ||
          lookahead == 'P') ADVANCE(121);
      END_STATE();
    case 208:
      if (lookahead == 'A' ||
          lookahead == 'P') ADVANCE(122);
      END_STATE();
    case 209:
      if (lookahead == 'A' ||
          lookahead == 'P') ADVANCE(123);
      END_STATE();
    case 210:
      if (lookahead == 'A' ||
          lookahead == 'P') ADVANCE(124);
      END_STATE();
    case 211:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(211)
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 212:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 213:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(344);
      END_STATE();
    case 214:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(398);
      END_STATE();
    case 215:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(345);
      END_STATE();
    case 216:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(389);
      END_STATE();
    case 217:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(397);
      END_STATE();
    case 218:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(391);
      END_STATE();
    case 219:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(49);
      END_STATE();
    case 220:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(356);
      END_STATE();
    case 221:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      END_STATE();
    case 222:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(364);
      END_STATE();
    case 223:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(365);
      END_STATE();
    case 224:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(362);
      END_STATE();
    case 225:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(361);
      END_STATE();
    case 226:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(366);
      END_STATE();
    case 227:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 228:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(367);
      END_STATE();
    case 229:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(363);
      END_STATE();
    case 230:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(368);
      END_STATE();
    case 231:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(33);
      END_STATE();
    case 232:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(358);
      END_STATE();
    case 233:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 234:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(260);
      END_STATE();
    case 235:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(103);
      END_STATE();
    case 236:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(248);
      END_STATE();
    case 237:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(222);
      END_STATE();
    case 238:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(223);
      END_STATE();
    case 239:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(225);
      END_STATE();
    case 240:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(226);
      END_STATE();
    case 241:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(227);
      END_STATE();
    case 242:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(228);
      END_STATE();
    case 243:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(229);
      END_STATE();
    case 244:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(230);
      END_STATE();
    case 245:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(233);
      END_STATE();
    case 246:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      END_STATE();
    case 247:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(239);
      END_STATE();
    case 248:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 249:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(360);
      END_STATE();
    case 250:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(105);
      END_STATE();
    case 251:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(247);
      END_STATE();
    case 252:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      END_STATE();
    case 253:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(91);
      END_STATE();
    case 254:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(87);
      END_STATE();
    case 255:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(33);
      END_STATE();
    case 256:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(49);
      END_STATE();
    case 257:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(260);
      END_STATE();
    case 258:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(33);
      END_STATE();
    case 259:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(260);
      END_STATE();
    case 260:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(49);
      END_STATE();
    case 261:
      if (eof) ADVANCE(262);
      if (lookahead == '!') ADVANCE(116);
      if (lookahead == '(') ADVANCE(60);
      if (lookahead == ')') ADVANCE(288);
      if (lookahead == '*') ADVANCE(404);
      if (lookahead == '+') ADVANCE(401);
      if (lookahead == ',') ADVANCE(278);
      if (lookahead == '-') ADVANCE(402);
      if (lookahead == '.') ADVANCE(295);
      if (lookahead == '/') ADVANCE(403);
      if (lookahead == '<') ADVANCE(409);
      if (lookahead == '=') ADVANCE(399);
      if (lookahead == '>') ADVANCE(407);
      if (lookahead == 'a') ADVANCE(187);
      if (lookahead == 'b') ADVANCE(205);
      if (lookahead == 'd') ADVANCE(144);
      if (lookahead == 'f') ADVANCE(181);
      if (lookahead == 'i') ADVANCE(164);
      if (lookahead == 'o') ADVANCE(165);
      if (lookahead == '|') ADVANCE(400);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(261)
      END_STATE();
    case 262:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_table_token1);
      if (lookahead == ':') ADVANCE(254);
      if (lookahead == 'a') ADVANCE(264);
      if (('b' <= lookahead && lookahead <= 'f')) ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_table_token1);
      if (lookahead == ':') ADVANCE(254);
      if (lookahead == 'l') ADVANCE(272);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_table_token1);
      if (lookahead == ':') ADVANCE(254);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_table_token1);
      if (lookahead == ':') ADVANCE(254);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_table_token1);
      if (lookahead == ':') ADVANCE(254);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_table_token1);
      if (lookahead == ':') ADVANCE(254);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_table_token1);
      if (lookahead == 'e') ADVANCE(347);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_table_token1);
      if (lookahead == 'e') ADVANCE(349);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_table_token1);
      if (lookahead == 'r') ADVANCE(273);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_table_token1);
      if (lookahead == 's') ADVANCE(270);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_table_token1);
      if (lookahead == 'u') ADVANCE(269);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_table_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_table_token1);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_list);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_sort);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_summarize);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_compute);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == ')') ADVANCE(430);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_limit);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_duringpast);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_on);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == 'a') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == 'a') ADVANCE(309);
      if (lookahead == 'i') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == 'g') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == 'm') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == 'n') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == 'n') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == 'o') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == 's') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == 't') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == 't') ADVANCE(416);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == 'u') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == 'u') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == 'v') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == 'x') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_field_name);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_field_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(311);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_field_property);
      if (lookahead == 'a') ADVANCE(319);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_field_property);
      if (lookahead == 'a') ADVANCE(325);
      if (lookahead == 'i') ADVANCE(316);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_field_property);
      if (lookahead == 'g') ADVANCE(420);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_field_property);
      if (lookahead == 'm') ADVANCE(423);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_field_property);
      if (lookahead == 'n') ADVANCE(383);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_field_property);
      if (lookahead == 'n') ADVANCE(321);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_field_property);
      if (lookahead == 'o') ADVANCE(323);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_field_property);
      if (lookahead == 's') ADVANCE(320);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_field_property);
      if (lookahead == 't') ADVANCE(429);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_field_property);
      if (lookahead == 't') ADVANCE(417);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_field_property);
      if (lookahead == 'u') ADVANCE(315);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_field_property);
      if (lookahead == 'u') ADVANCE(317);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_field_property);
      if (lookahead == 'v') ADVANCE(314);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_field_property);
      if (lookahead == 'x') ADVANCE(426);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_field_property);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_asc);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_desc);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(332);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(332);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(334);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(335);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(335);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_int_token1);
      if (lookahead == '.') ADVANCE(213);
      if (lookahead == ':') ADVANCE(254);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_int_token1);
      if (lookahead == '.') ADVANCE(213);
      if (lookahead == ':') ADVANCE(254);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(336);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_int_token1);
      if (lookahead == '.') ADVANCE(213);
      if (lookahead == ':') ADVANCE(254);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(337);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_int_token1);
      if (lookahead == '.') ADVANCE(215);
      if (lookahead == ':') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_int_token1);
      if (lookahead == '.') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_int_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(341);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '.') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(345);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '.') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(342);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '.') ADVANCE(246);
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
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(275);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(275);
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
      if (lookahead == ' ') ADVANCE(249);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(225);
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
      if (lookahead == ' ') ADVANCE(250);
      if (lookahead == ',') ADVANCE(52);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_date_time_token1);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_date_time_token2);
      if (lookahead == ' ') ADVANCE(235);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_date_time_token3);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_date_time_token4);
      if (lookahead == ':') ADVANCE(243);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_date_time_token5);
      if (lookahead == ' ') ADVANCE(208);
      if (lookahead == ':') ADVANCE(245);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_date_time_token6);
      if (lookahead == ' ') ADVANCE(209);
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
      if (lookahead == 'o') ADVANCE(186);
      if (lookahead == 'u') ADVANCE(158);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_min);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_min);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_min);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_h);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_d);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_d);
      if (lookahead == ':') ADVANCE(254);
      if (lookahead == 'e') ADVANCE(73);
      if (lookahead == 'u') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(76);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_ip_address_token1);
      if (lookahead == '/') ADVANCE(218);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_ip_address_token1);
      if (lookahead == '/') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(387);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_ip_address_token1);
      if (lookahead == '/') ADVANCE(218);
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
      if (lookahead == ':') ADVANCE(78);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_ip_address_token3);
      if (lookahead == ':') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(392);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_ip_address_token3);
      if (lookahead == ':') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(393);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_ip_address_token3);
      if (lookahead == ':') ADVANCE(78);
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
      if (lookahead == '.') ADVANCE(214);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_count);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_avg);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_avg);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_avg);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_sum);
      if (lookahead == 'm') ADVANCE(128);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_sum);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_sum);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_max);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_max);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_max);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(326);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_last);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_last);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_last);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(326);
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
  [2] = {.lex_state = 58},
  [3] = {.lex_state = 58},
  [4] = {.lex_state = 58},
  [5] = {.lex_state = 58},
  [6] = {.lex_state = 58},
  [7] = {.lex_state = 58},
  [8] = {.lex_state = 58},
  [9] = {.lex_state = 58},
  [10] = {.lex_state = 58},
  [11] = {.lex_state = 58},
  [12] = {.lex_state = 58},
  [13] = {.lex_state = 58},
  [14] = {.lex_state = 53},
  [15] = {.lex_state = 54},
  [16] = {.lex_state = 54},
  [17] = {.lex_state = 54},
  [18] = {.lex_state = 53},
  [19] = {.lex_state = 54},
  [20] = {.lex_state = 54},
  [21] = {.lex_state = 54},
  [22] = {.lex_state = 53},
  [23] = {.lex_state = 54},
  [24] = {.lex_state = 54},
  [25] = {.lex_state = 53},
  [26] = {.lex_state = 54},
  [27] = {.lex_state = 54},
  [28] = {.lex_state = 53},
  [29] = {.lex_state = 54},
  [30] = {.lex_state = 261},
  [31] = {.lex_state = 261},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 53},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 54},
  [36] = {.lex_state = 261},
  [37] = {.lex_state = 261},
  [38] = {.lex_state = 261},
  [39] = {.lex_state = 127},
  [40] = {.lex_state = 261},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 261},
  [44] = {.lex_state = 261},
  [45] = {.lex_state = 127},
  [46] = {.lex_state = 127},
  [47] = {.lex_state = 127},
  [48] = {.lex_state = 261},
  [49] = {.lex_state = 127},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 127},
  [52] = {.lex_state = 58},
  [53] = {.lex_state = 261},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 261},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 261},
  [59] = {.lex_state = 261},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 261},
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
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 261},
  [85] = {.lex_state = 261},
  [86] = {.lex_state = 261},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 261},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 134},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 261},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 261},
  [107] = {.lex_state = 261},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 59},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 6},
  [113] = {.lex_state = 261},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 59},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 6},
  [121] = {.lex_state = 7},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 6},
  [124] = {.lex_state = 7},
  [125] = {.lex_state = 7},
  [126] = {.lex_state = 7},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 59},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 6},
  [134] = {.lex_state = 6},
  [135] = {.lex_state = 7},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 11},
  [143] = {.lex_state = 59},
  [144] = {.lex_state = 59},
  [145] = {.lex_state = 59},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 11},
  [148] = {.lex_state = 59},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 57},
  [153] = {.lex_state = 57},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 59},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 59},
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
  [176] = {.lex_state = 59},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 57},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 57},
  [188] = {.lex_state = 59},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 211},
  [198] = {.lex_state = 57},
  [199] = {.lex_state = 211},
  [200] = {.lex_state = 59},
  [201] = {.lex_state = 59},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 59},
  [205] = {.lex_state = 59},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 59},
  [209] = {.lex_state = 59},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_list] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_sort] = ACTIONS(1),
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
    [aux_sym_ip_address_token3] = ACTIONS(1),
    [aux_sym_ip_address_token4] = ACTIONS(1),
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
    [sym_source_file] = STATE(211),
    [sym_query] = STATE(210),
    [sym_table] = STATE(84),
    [sym_select_clause] = STATE(119),
    [aux_sym_table_token1] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
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
    STATE(38), 1,
      sym_min,
    STATE(82), 1,
      sym_expression,
    STATE(198), 1,
      sym_aggregate_field,
    ACTIONS(15), 5,
      sym_count,
      sym_avg,
      sym_sum,
      sym_max,
      sym_last,
    STATE(78), 8,
      sym_expression_addition,
      sym_expression_subtraction,
      sym_expression_multiplication,
      sym_expression_division,
      sym_expression_parenthesized_expression,
      sym_field,
      sym_int,
      sym_aggregate_function,
  [42] = 10,
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
    STATE(38), 1,
      sym_min,
    STATE(100), 1,
      sym_expression,
    STATE(198), 1,
      sym_aggregate_field,
    ACTIONS(15), 5,
      sym_count,
      sym_avg,
      sym_sum,
      sym_max,
      sym_last,
    STATE(78), 8,
      sym_expression_addition,
      sym_expression_subtraction,
      sym_expression_multiplication,
      sym_expression_division,
      sym_expression_parenthesized_expression,
      sym_field,
      sym_int,
      sym_aggregate_function,
  [84] = 10,
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
    STATE(38), 1,
      sym_min,
    STATE(72), 1,
      sym_expression,
    STATE(198), 1,
      sym_aggregate_field,
    ACTIONS(15), 5,
      sym_count,
      sym_avg,
      sym_sum,
      sym_max,
      sym_last,
    STATE(78), 8,
      sym_expression_addition,
      sym_expression_subtraction,
      sym_expression_multiplication,
      sym_expression_division,
      sym_expression_parenthesized_expression,
      sym_field,
      sym_int,
      sym_aggregate_function,
  [126] = 10,
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
    STATE(38), 1,
      sym_min,
    STATE(76), 1,
      sym_expression,
    STATE(198), 1,
      sym_aggregate_field,
    ACTIONS(15), 5,
      sym_count,
      sym_avg,
      sym_sum,
      sym_max,
      sym_last,
    STATE(78), 8,
      sym_expression_addition,
      sym_expression_subtraction,
      sym_expression_multiplication,
      sym_expression_division,
      sym_expression_parenthesized_expression,
      sym_field,
      sym_int,
      sym_aggregate_function,
  [168] = 10,
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
    STATE(38), 1,
      sym_min,
    STATE(67), 1,
      sym_expression,
    STATE(198), 1,
      sym_aggregate_field,
    ACTIONS(15), 5,
      sym_count,
      sym_avg,
      sym_sum,
      sym_max,
      sym_last,
    STATE(78), 8,
      sym_expression_addition,
      sym_expression_subtraction,
      sym_expression_multiplication,
      sym_expression_division,
      sym_expression_parenthesized_expression,
      sym_field,
      sym_int,
      sym_aggregate_function,
  [210] = 10,
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
    STATE(38), 1,
      sym_min,
    STATE(76), 1,
      sym_expression,
    STATE(198), 1,
      sym_aggregate_field,
    ACTIONS(15), 5,
      sym_count,
      sym_avg,
      sym_sum,
      sym_max,
      sym_last,
    STATE(78), 8,
      sym_expression_addition,
      sym_expression_subtraction,
      sym_expression_multiplication,
      sym_expression_division,
      sym_expression_parenthesized_expression,
      sym_field,
      sym_int,
      sym_aggregate_function,
  [252] = 10,
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
    STATE(38), 1,
      sym_min,
    STATE(80), 1,
      sym_expression,
    STATE(198), 1,
      sym_aggregate_field,
    ACTIONS(15), 5,
      sym_count,
      sym_avg,
      sym_sum,
      sym_max,
      sym_last,
    STATE(78), 8,
      sym_expression_addition,
      sym_expression_subtraction,
      sym_expression_multiplication,
      sym_expression_division,
      sym_expression_parenthesized_expression,
      sym_field,
      sym_int,
      sym_aggregate_function,
  [294] = 10,
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
    STATE(38), 1,
      sym_min,
    STATE(67), 1,
      sym_expression,
    STATE(198), 1,
      sym_aggregate_field,
    ACTIONS(15), 5,
      sym_count,
      sym_avg,
      sym_sum,
      sym_max,
      sym_last,
    STATE(78), 8,
      sym_expression_addition,
      sym_expression_subtraction,
      sym_expression_multiplication,
      sym_expression_division,
      sym_expression_parenthesized_expression,
      sym_field,
      sym_int,
      sym_aggregate_function,
  [336] = 10,
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
    STATE(38), 1,
      sym_min,
    STATE(95), 1,
      sym_expression,
    STATE(198), 1,
      sym_aggregate_field,
    ACTIONS(15), 5,
      sym_count,
      sym_avg,
      sym_sum,
      sym_max,
      sym_last,
    STATE(78), 8,
      sym_expression_addition,
      sym_expression_subtraction,
      sym_expression_multiplication,
      sym_expression_division,
      sym_expression_parenthesized_expression,
      sym_field,
      sym_int,
      sym_aggregate_function,
  [378] = 10,
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
    STATE(38), 1,
      sym_min,
    STATE(79), 1,
      sym_expression,
    STATE(198), 1,
      sym_aggregate_field,
    ACTIONS(15), 5,
      sym_count,
      sym_avg,
      sym_sum,
      sym_max,
      sym_last,
    STATE(78), 8,
      sym_expression_addition,
      sym_expression_subtraction,
      sym_expression_multiplication,
      sym_expression_division,
      sym_expression_parenthesized_expression,
      sym_field,
      sym_int,
      sym_aggregate_function,
  [420] = 10,
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
    STATE(38), 1,
      sym_min,
    STATE(101), 1,
      sym_expression,
    STATE(198), 1,
      sym_aggregate_field,
    ACTIONS(15), 5,
      sym_count,
      sym_avg,
      sym_sum,
      sym_max,
      sym_last,
    STATE(78), 8,
      sym_expression_addition,
      sym_expression_subtraction,
      sym_expression_multiplication,
      sym_expression_division,
      sym_expression_parenthesized_expression,
      sym_field,
      sym_int,
      sym_aggregate_function,
  [462] = 10,
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
    STATE(38), 1,
      sym_min,
    STATE(81), 1,
      sym_expression,
    STATE(198), 1,
      sym_aggregate_field,
    ACTIONS(15), 5,
      sym_count,
      sym_avg,
      sym_sum,
      sym_max,
      sym_last,
    STATE(78), 8,
      sym_expression_addition,
      sym_expression_subtraction,
      sym_expression_multiplication,
      sym_expression_division,
      sym_expression_parenthesized_expression,
      sym_field,
      sym_int,
      sym_aggregate_function,
  [504] = 11,
    ACTIONS(19), 1,
      aux_sym_table_token1,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      aux_sym_int_token1,
    ACTIONS(29), 1,
      sym_float,
    ACTIONS(37), 1,
      sym_version,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(35), 2,
      aux_sym_ip_address_token2,
      aux_sym_ip_address_token4,
    ACTIONS(33), 3,
      aux_sym_ip_address_token1,
      aux_sym_ip_address_token3,
      aux_sym_ip_address_token5,
    STATE(118), 6,
      sym_string,
      sym_int,
      sym_boolean,
      sym_enum,
      sym_byte,
      sym_ip_address,
  [547] = 11,
    ACTIONS(39), 1,
      aux_sym_table_token1,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      aux_sym_int_token1,
    ACTIONS(47), 1,
      sym_float,
    ACTIONS(55), 1,
      sym_version,
    STATE(24), 1,
      aux_sym_where_clause_repeat1,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 2,
      aux_sym_ip_address_token2,
      aux_sym_ip_address_token4,
    ACTIONS(51), 3,
      aux_sym_ip_address_token1,
      aux_sym_ip_address_token3,
      aux_sym_ip_address_token5,
    STATE(178), 6,
      sym_string,
      sym_int,
      sym_boolean,
      sym_enum,
      sym_byte,
      sym_ip_address,
  [590] = 11,
    ACTIONS(39), 1,
      aux_sym_table_token1,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      aux_sym_int_token1,
    ACTIONS(57), 1,
      sym_float,
    ACTIONS(59), 1,
      sym_version,
    STATE(21), 1,
      aux_sym_where_clause_repeat1,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 2,
      aux_sym_ip_address_token2,
      aux_sym_ip_address_token4,
    ACTIONS(51), 3,
      aux_sym_ip_address_token1,
      aux_sym_ip_address_token3,
      aux_sym_ip_address_token5,
    STATE(168), 6,
      sym_string,
      sym_int,
      sym_boolean,
      sym_enum,
      sym_byte,
      sym_ip_address,
  [633] = 11,
    ACTIONS(39), 1,
      aux_sym_table_token1,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      aux_sym_int_token1,
    ACTIONS(61), 1,
      sym_float,
    ACTIONS(63), 1,
      sym_version,
    STATE(21), 1,
      aux_sym_where_clause_repeat1,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 2,
      aux_sym_ip_address_token2,
      aux_sym_ip_address_token4,
    ACTIONS(51), 3,
      aux_sym_ip_address_token1,
      aux_sym_ip_address_token3,
      aux_sym_ip_address_token5,
    STATE(164), 6,
      sym_string,
      sym_int,
      sym_boolean,
      sym_enum,
      sym_byte,
      sym_ip_address,
  [676] = 11,
    ACTIONS(39), 1,
      aux_sym_table_token1,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      aux_sym_int_token1,
    ACTIONS(65), 1,
      anon_sym_LBRACK,
    ACTIONS(67), 1,
      sym_float,
    ACTIONS(69), 1,
      sym_version,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 2,
      aux_sym_ip_address_token2,
      aux_sym_ip_address_token4,
    ACTIONS(51), 3,
      aux_sym_ip_address_token1,
      aux_sym_ip_address_token3,
      aux_sym_ip_address_token5,
    STATE(140), 6,
      sym_string,
      sym_int,
      sym_boolean,
      sym_enum,
      sym_byte,
      sym_ip_address,
  [719] = 11,
    ACTIONS(39), 1,
      aux_sym_table_token1,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      aux_sym_int_token1,
    ACTIONS(71), 1,
      sym_float,
    ACTIONS(73), 1,
      sym_version,
    STATE(16), 1,
      aux_sym_where_clause_repeat1,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 2,
      aux_sym_ip_address_token2,
      aux_sym_ip_address_token4,
    ACTIONS(51), 3,
      aux_sym_ip_address_token1,
      aux_sym_ip_address_token3,
      aux_sym_ip_address_token5,
    STATE(159), 6,
      sym_string,
      sym_int,
      sym_boolean,
      sym_enum,
      sym_byte,
      sym_ip_address,
  [762] = 11,
    ACTIONS(39), 1,
      aux_sym_table_token1,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      aux_sym_int_token1,
    ACTIONS(75), 1,
      sym_float,
    ACTIONS(77), 1,
      sym_version,
    STATE(21), 1,
      aux_sym_where_clause_repeat1,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 2,
      aux_sym_ip_address_token2,
      aux_sym_ip_address_token4,
    ACTIONS(51), 3,
      aux_sym_ip_address_token1,
      aux_sym_ip_address_token3,
      aux_sym_ip_address_token5,
    STATE(158), 6,
      sym_string,
      sym_int,
      sym_boolean,
      sym_enum,
      sym_byte,
      sym_ip_address,
  [805] = 11,
    ACTIONS(79), 1,
      aux_sym_table_token1,
    ACTIONS(82), 1,
      anon_sym_DQUOTE,
    ACTIONS(85), 1,
      anon_sym_SQUOTE,
    ACTIONS(88), 1,
      aux_sym_int_token1,
    ACTIONS(91), 1,
      sym_float,
    ACTIONS(103), 1,
      sym_version,
    STATE(21), 1,
      aux_sym_where_clause_repeat1,
    ACTIONS(94), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(100), 2,
      aux_sym_ip_address_token2,
      aux_sym_ip_address_token4,
    ACTIONS(97), 3,
      aux_sym_ip_address_token1,
      aux_sym_ip_address_token3,
      aux_sym_ip_address_token5,
    STATE(207), 6,
      sym_string,
      sym_int,
      sym_boolean,
      sym_enum,
      sym_byte,
      sym_ip_address,
  [848] = 11,
    ACTIONS(19), 1,
      aux_sym_table_token1,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_SQUOTE,
    ACTIONS(27), 1,
      aux_sym_int_token1,
    ACTIONS(106), 1,
      anon_sym_LBRACK,
    ACTIONS(108), 1,
      sym_float,
    ACTIONS(110), 1,
      sym_version,
    ACTIONS(31), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(35), 2,
      aux_sym_ip_address_token2,
      aux_sym_ip_address_token4,
    ACTIONS(33), 3,
      aux_sym_ip_address_token1,
      aux_sym_ip_address_token3,
      aux_sym_ip_address_token5,
    STATE(109), 6,
      sym_string,
      sym_int,
      sym_boolean,
      sym_enum,
      sym_byte,
      sym_ip_address,
  [891] = 11,
    ACTIONS(39), 1,
      aux_sym_table_token1,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      aux_sym_int_token1,
    ACTIONS(112), 1,
      sym_float,
    ACTIONS(114), 1,
      sym_version,
    STATE(17), 1,
      aux_sym_where_clause_repeat1,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 2,
      aux_sym_ip_address_token2,
      aux_sym_ip_address_token4,
    ACTIONS(51), 3,
      aux_sym_ip_address_token1,
      aux_sym_ip_address_token3,
      aux_sym_ip_address_token5,
    STATE(194), 6,
      sym_string,
      sym_int,
      sym_boolean,
      sym_enum,
      sym_byte,
      sym_ip_address,
  [934] = 11,
    ACTIONS(39), 1,
      aux_sym_table_token1,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      aux_sym_int_token1,
    ACTIONS(116), 1,
      sym_float,
    ACTIONS(118), 1,
      sym_version,
    STATE(21), 1,
      aux_sym_where_clause_repeat1,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 2,
      aux_sym_ip_address_token2,
      aux_sym_ip_address_token4,
    ACTIONS(51), 3,
      aux_sym_ip_address_token1,
      aux_sym_ip_address_token3,
      aux_sym_ip_address_token5,
    STATE(192), 6,
      sym_string,
      sym_int,
      sym_boolean,
      sym_enum,
      sym_byte,
      sym_ip_address,
  [977] = 11,
    ACTIONS(39), 1,
      aux_sym_table_token1,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      aux_sym_int_token1,
    ACTIONS(120), 1,
      anon_sym_LBRACK,
    ACTIONS(122), 1,
      sym_float,
    ACTIONS(124), 1,
      sym_version,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 2,
      aux_sym_ip_address_token2,
      aux_sym_ip_address_token4,
    ACTIONS(51), 3,
      aux_sym_ip_address_token1,
      aux_sym_ip_address_token3,
      aux_sym_ip_address_token5,
    STATE(175), 6,
      sym_string,
      sym_int,
      sym_boolean,
      sym_enum,
      sym_byte,
      sym_ip_address,
  [1020] = 11,
    ACTIONS(39), 1,
      aux_sym_table_token1,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      aux_sym_int_token1,
    ACTIONS(126), 1,
      sym_float,
    ACTIONS(128), 1,
      sym_version,
    STATE(20), 1,
      aux_sym_where_clause_repeat1,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 2,
      aux_sym_ip_address_token2,
      aux_sym_ip_address_token4,
    ACTIONS(51), 3,
      aux_sym_ip_address_token1,
      aux_sym_ip_address_token3,
      aux_sym_ip_address_token5,
    STATE(155), 6,
      sym_string,
      sym_int,
      sym_boolean,
      sym_enum,
      sym_byte,
      sym_ip_address,
  [1063] = 11,
    ACTIONS(39), 1,
      aux_sym_table_token1,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      aux_sym_int_token1,
    ACTIONS(130), 1,
      sym_float,
    ACTIONS(132), 1,
      sym_version,
    STATE(21), 1,
      aux_sym_where_clause_repeat1,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 2,
      aux_sym_ip_address_token2,
      aux_sym_ip_address_token4,
    ACTIONS(51), 3,
      aux_sym_ip_address_token1,
      aux_sym_ip_address_token3,
      aux_sym_ip_address_token5,
    STATE(160), 6,
      sym_string,
      sym_int,
      sym_boolean,
      sym_enum,
      sym_byte,
      sym_ip_address,
  [1106] = 11,
    ACTIONS(39), 1,
      aux_sym_table_token1,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      aux_sym_int_token1,
    ACTIONS(134), 1,
      anon_sym_LBRACK,
    ACTIONS(136), 1,
      sym_float,
    ACTIONS(138), 1,
      sym_version,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 2,
      aux_sym_ip_address_token2,
      aux_sym_ip_address_token4,
    ACTIONS(51), 3,
      aux_sym_ip_address_token1,
      aux_sym_ip_address_token3,
      aux_sym_ip_address_token5,
    STATE(149), 6,
      sym_string,
      sym_int,
      sym_boolean,
      sym_enum,
      sym_byte,
      sym_ip_address,
  [1149] = 11,
    ACTIONS(39), 1,
      aux_sym_table_token1,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_SQUOTE,
    ACTIONS(45), 1,
      aux_sym_int_token1,
    ACTIONS(140), 1,
      sym_float,
    ACTIONS(142), 1,
      sym_version,
    STATE(27), 1,
      aux_sym_where_clause_repeat1,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(53), 2,
      aux_sym_ip_address_token2,
      aux_sym_ip_address_token4,
    ACTIONS(51), 3,
      aux_sym_ip_address_token1,
      aux_sym_ip_address_token3,
      aux_sym_ip_address_token5,
    STATE(186), 6,
      sym_string,
      sym_int,
      sym_boolean,
      sym_enum,
      sym_byte,
      sym_ip_address,
  [1192] = 4,
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
  [1220] = 2,
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
  [1243] = 9,
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
    STATE(182), 8,
      sym_include_clause,
      sym_list_clause,
      sym_sort_clause,
      sym_summarize_clause,
      sym_compute_clause,
      sym_where_clause,
      sym_with_clause,
      sym_limit_clause,
  [1278] = 2,
    ACTIONS(169), 5,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      aux_sym_ip_address_token2,
      aux_sym_ip_address_token4,
      sym_version,
    ACTIONS(167), 9,
      aux_sym_table_token1,
      anon_sym_LBRACK,
      aux_sym_int_token1,
      sym_float,
      anon_sym_true,
      anon_sym_false,
      aux_sym_ip_address_token1,
      aux_sym_ip_address_token3,
      aux_sym_ip_address_token5,
  [1297] = 5,
    STATE(196), 1,
      sym_date_time,
    STATE(206), 1,
      sym_date,
    ACTIONS(171), 2,
      aux_sym_date_token1,
      aux_sym_date_token2,
    ACTIONS(175), 4,
      aux_sym_date_time_token2,
      aux_sym_date_time_token4,
      aux_sym_date_time_token5,
      aux_sym_date_time_token6,
    ACTIONS(173), 6,
      aux_sym_date_time_token1,
      aux_sym_date_time_token3,
      aux_sym_date_time_token7,
      aux_sym_date_time_token8,
      aux_sym_date_time_token9,
      aux_sym_date_time_token10,
  [1322] = 2,
    ACTIONS(179), 5,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      aux_sym_ip_address_token2,
      aux_sym_ip_address_token4,
      sym_version,
    ACTIONS(177), 8,
      aux_sym_table_token1,
      aux_sym_int_token1,
      sym_float,
      anon_sym_true,
      anon_sym_false,
      aux_sym_ip_address_token1,
      aux_sym_ip_address_token3,
      aux_sym_ip_address_token5,
  [1340] = 1,
    ACTIONS(181), 12,
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
  [1355] = 2,
    ACTIONS(185), 1,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(183), 11,
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
  [1372] = 1,
    ACTIONS(187), 12,
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
  [1387] = 7,
    ACTIONS(13), 1,
      anon_sym_min,
    ACTIONS(189), 1,
      sym_field_property,
    STATE(37), 1,
      sym_aggregate_field,
    STATE(38), 1,
      sym_min,
    STATE(43), 1,
      sym_aggregate_function,
    STATE(48), 1,
      sym_aggregate,
    ACTIONS(15), 5,
      sym_count,
      sym_avg,
      sym_sum,
      sym_max,
      sym_last,
  [1413] = 1,
    ACTIONS(191), 11,
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
  [1427] = 4,
    ACTIONS(193), 1,
      anon_sym_DOT,
    STATE(50), 1,
      aux_sym_field_repeat1,
    ACTIONS(195), 3,
      anon_sym_EQ,
      sym_greater_than,
      sym_less_than,
    ACTIONS(197), 6,
      anon_sym_EQ_EQ,
      sym_not_equals,
      sym_greater_than_or_equals,
      sym_less_than_or_equals,
      sym_in_array,
      sym_not_in_array,
  [1447] = 3,
    STATE(177), 1,
      sym_date_time,
    ACTIONS(201), 4,
      aux_sym_date_time_token2,
      aux_sym_date_time_token4,
      aux_sym_date_time_token5,
      aux_sym_date_time_token6,
    ACTIONS(199), 6,
      aux_sym_date_time_token1,
      aux_sym_date_time_token3,
      aux_sym_date_time_token7,
      aux_sym_date_time_token8,
      aux_sym_date_time_token9,
      aux_sym_date_time_token10,
  [1465] = 1,
    ACTIONS(183), 11,
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
  [1479] = 1,
    ACTIONS(203), 11,
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
  [1493] = 7,
    ACTIONS(13), 1,
      anon_sym_min,
    ACTIONS(205), 1,
      sym_field_property,
    STATE(37), 1,
      sym_aggregate_field,
    STATE(38), 1,
      sym_min,
    STATE(43), 1,
      sym_aggregate_function,
    STATE(48), 1,
      sym_aggregate,
    ACTIONS(15), 5,
      sym_count,
      sym_avg,
      sym_sum,
      sym_max,
      sym_last,
  [1519] = 7,
    ACTIONS(13), 1,
      anon_sym_min,
    ACTIONS(205), 1,
      sym_field_property,
    STATE(37), 1,
      sym_aggregate_field,
    STATE(38), 1,
      sym_min,
    STATE(43), 1,
      sym_aggregate_function,
    STATE(44), 1,
      sym_aggregate,
    ACTIONS(15), 5,
      sym_count,
      sym_avg,
      sym_sum,
      sym_max,
      sym_last,
  [1545] = 7,
    ACTIONS(189), 1,
      sym_field_property,
    ACTIONS(207), 1,
      anon_sym_min,
    STATE(53), 1,
      sym_min,
    STATE(65), 1,
      sym_aggregate_field,
    STATE(70), 1,
      sym_aggregate_function,
    STATE(74), 1,
      sym_aggregate,
    ACTIONS(209), 5,
      sym_count,
      sym_avg,
      sym_sum,
      sym_max,
      sym_last,
  [1571] = 1,
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
  [1585] = 7,
    ACTIONS(13), 1,
      anon_sym_min,
    ACTIONS(189), 1,
      sym_field_property,
    STATE(37), 1,
      sym_aggregate_field,
    STATE(38), 1,
      sym_min,
    STATE(43), 1,
      sym_aggregate_function,
    STATE(44), 1,
      sym_aggregate,
    ACTIONS(15), 5,
      sym_count,
      sym_avg,
      sym_sum,
      sym_max,
      sym_last,
  [1611] = 4,
    ACTIONS(213), 1,
      anon_sym_DOT,
    STATE(30), 1,
      aux_sym_field_repeat1,
    ACTIONS(215), 3,
      anon_sym_EQ,
      sym_greater_than,
      sym_less_than,
    ACTIONS(217), 6,
      anon_sym_EQ_EQ,
      sym_not_equals,
      sym_greater_than_or_equals,
      sym_less_than_or_equals,
      sym_in_array,
      sym_not_in_array,
  [1631] = 7,
    ACTIONS(189), 1,
      sym_field_property,
    ACTIONS(207), 1,
      anon_sym_min,
    STATE(53), 1,
      sym_min,
    STATE(65), 1,
      sym_aggregate_field,
    STATE(70), 1,
      sym_aggregate_function,
    STATE(71), 1,
      sym_aggregate,
    ACTIONS(209), 5,
      sym_count,
      sym_avg,
      sym_sum,
      sym_max,
      sym_last,
  [1657] = 2,
    ACTIONS(219), 2,
      anon_sym_LPAREN,
      sym_float,
    ACTIONS(221), 8,
      sym_field_name,
      aux_sym_int_token1,
      anon_sym_min,
      sym_count,
      sym_avg,
      sym_sum,
      sym_max,
      sym_last,
  [1672] = 2,
    ACTIONS(223), 3,
      anon_sym_EQ,
      sym_greater_than,
      sym_less_than,
    ACTIONS(187), 7,
      anon_sym_EQ_EQ,
      sym_not_equals,
      sym_greater_than_or_equals,
      sym_less_than_or_equals,
      sym_in_array,
      sym_not_in_array,
      anon_sym_LPAREN_RPAREN,
  [1687] = 5,
    ACTIONS(225), 1,
      anon_sym_EQ,
    ACTIONS(227), 1,
      anon_sym_EQ_EQ,
    STATE(18), 1,
      sym_equals,
    ACTIONS(231), 2,
      sym_greater_than,
      sym_less_than,
    ACTIONS(229), 5,
      sym_not_equals,
      sym_greater_than_or_equals,
      sym_less_than_or_equals,
      sym_in_array,
      sym_not_in_array,
  [1708] = 3,
    ACTIONS(233), 1,
      anon_sym_DOT,
    STATE(58), 1,
      aux_sym_field_repeat1,
    ACTIONS(197), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_asc,
      anon_sym_desc,
      sym_addition,
      sym_subtraction,
      sym_division,
      sym_multiplication,
  [1725] = 3,
    ACTIONS(235), 1,
      anon_sym_DOT,
    STATE(56), 1,
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
  [1742] = 3,
    ACTIONS(238), 1,
      anon_sym_DOT,
    STATE(66), 1,
      aux_sym_field_repeat1,
    ACTIONS(197), 8,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_pipe,
      sym_addition,
      sym_subtraction,
      sym_division,
      sym_multiplication,
      sym_by,
  [1759] = 3,
    ACTIONS(240), 1,
      anon_sym_DOT,
    STATE(30), 1,
      aux_sym_field_repeat1,
    ACTIONS(217), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_asc,
      anon_sym_desc,
      sym_addition,
      sym_subtraction,
      sym_division,
      sym_multiplication,
  [1776] = 2,
    ACTIONS(242), 3,
      anon_sym_EQ,
      sym_greater_than,
      sym_less_than,
    ACTIONS(181), 7,
      anon_sym_EQ_EQ,
      sym_not_equals,
      sym_greater_than_or_equals,
      sym_less_than_or_equals,
      sym_in_array,
      sym_not_in_array,
      anon_sym_LPAREN_RPAREN,
  [1791] = 5,
    ACTIONS(225), 1,
      anon_sym_EQ,
    ACTIONS(227), 1,
      anon_sym_EQ_EQ,
    STATE(22), 1,
      sym_equals,
    ACTIONS(246), 2,
      sym_greater_than,
      sym_less_than,
    ACTIONS(244), 5,
      sym_not_equals,
      sym_greater_than_or_equals,
      sym_less_than_or_equals,
      sym_in_array,
      sym_not_in_array,
  [1812] = 5,
    ACTIONS(225), 1,
      anon_sym_EQ,
    ACTIONS(227), 1,
      anon_sym_EQ_EQ,
    STATE(25), 1,
      sym_equals,
    ACTIONS(250), 2,
      sym_greater_than,
      sym_less_than,
    ACTIONS(248), 5,
      sym_not_equals,
      sym_greater_than_or_equals,
      sym_less_than_or_equals,
      sym_in_array,
      sym_not_in_array,
  [1833] = 5,
    ACTIONS(225), 1,
      anon_sym_EQ,
    ACTIONS(227), 1,
      anon_sym_EQ_EQ,
    STATE(28), 1,
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
  [1854] = 5,
    ACTIONS(225), 1,
      anon_sym_EQ,
    ACTIONS(227), 1,
      anon_sym_EQ_EQ,
    STATE(14), 1,
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
  [1875] = 2,
    ACTIONS(260), 5,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      sym_and,
      sym_or,
    ACTIONS(262), 5,
      anon_sym_B,
      anon_sym_KB,
      anon_sym_MB,
      anon_sym_GB,
      anon_sym_TB,
  [1890] = 3,
    ACTIONS(266), 1,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(264), 3,
      anon_sym_EQ,
      sym_greater_than,
      sym_less_than,
    ACTIONS(183), 6,
      anon_sym_EQ_EQ,
      sym_not_equals,
      sym_greater_than_or_equals,
      sym_less_than_or_equals,
      sym_in_array,
      sym_not_in_array,
  [1907] = 3,
    ACTIONS(268), 1,
      anon_sym_DOT,
    STATE(56), 1,
      aux_sym_field_repeat1,
    ACTIONS(217), 8,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_pipe,
      sym_addition,
      sym_subtraction,
      sym_division,
      sym_multiplication,
      sym_by,
  [1924] = 1,
    ACTIONS(270), 9,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_pipe,
      sym_addition,
      sym_subtraction,
      sym_division,
      sym_multiplication,
      sym_by,
  [1936] = 1,
    ACTIONS(272), 9,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_pipe,
      sym_addition,
      sym_subtraction,
      sym_division,
      sym_multiplication,
      sym_by,
  [1948] = 1,
    ACTIONS(260), 9,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_pipe,
      sym_addition,
      sym_subtraction,
      sym_division,
      sym_multiplication,
      sym_by,
  [1960] = 2,
    ACTIONS(264), 3,
      anon_sym_EQ,
      sym_greater_than,
      sym_less_than,
    ACTIONS(183), 6,
      anon_sym_EQ_EQ,
      sym_not_equals,
      sym_greater_than_or_equals,
      sym_less_than_or_equals,
      sym_in_array,
      sym_not_in_array,
  [1974] = 2,
    ACTIONS(274), 3,
      anon_sym_EQ,
      sym_greater_than,
      sym_less_than,
    ACTIONS(203), 6,
      anon_sym_EQ_EQ,
      sym_not_equals,
      sym_greater_than_or_equals,
      sym_less_than_or_equals,
      sym_in_array,
      sym_not_in_array,
  [1988] = 8,
    ACTIONS(278), 1,
      anon_sym_COMMA,
    ACTIONS(280), 1,
      sym_addition,
    ACTIONS(282), 1,
      sym_subtraction,
    ACTIONS(284), 1,
      sym_division,
    ACTIONS(286), 1,
      sym_multiplication,
    ACTIONS(288), 1,
      sym_by,
    STATE(103), 1,
      aux_sym_summarize_clause_repeat1,
    ACTIONS(276), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [2014] = 2,
    ACTIONS(260), 4,
      ts_builtin_sym_end,
      sym_pipe,
      sym_and,
      sym_or,
    ACTIONS(290), 5,
      anon_sym_B,
      anon_sym_KB,
      anon_sym_MB,
      anon_sym_GB,
      anon_sym_TB,
  [2028] = 2,
    ACTIONS(292), 3,
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
  [2042] = 1,
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
  [2054] = 1,
    ACTIONS(294), 9,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_pipe,
      sym_addition,
      sym_subtraction,
      sym_division,
      sym_multiplication,
      sym_by,
  [2066] = 2,
    ACTIONS(296), 3,
      anon_sym_EQ,
      sym_greater_than,
      sym_less_than,
    ACTIONS(191), 6,
      anon_sym_EQ_EQ,
      sym_not_equals,
      sym_greater_than_or_equals,
      sym_less_than_or_equals,
      sym_in_array,
      sym_not_in_array,
  [2080] = 1,
    ACTIONS(298), 9,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_pipe,
      sym_addition,
      sym_subtraction,
      sym_division,
      sym_multiplication,
      sym_by,
  [2092] = 5,
    ACTIONS(280), 1,
      sym_addition,
    ACTIONS(282), 1,
      sym_subtraction,
    ACTIONS(284), 1,
      sym_division,
    ACTIONS(286), 1,
      sym_multiplication,
    ACTIONS(300), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_pipe,
      sym_by,
  [2111] = 3,
    ACTIONS(284), 1,
      sym_division,
    ACTIONS(286), 1,
      sym_multiplication,
    ACTIONS(302), 6,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_pipe,
      sym_addition,
      sym_subtraction,
      sym_by,
  [2126] = 3,
    ACTIONS(284), 1,
      sym_division,
    ACTIONS(286), 1,
      sym_multiplication,
    ACTIONS(304), 6,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_pipe,
      sym_addition,
      sym_subtraction,
      sym_by,
  [2141] = 7,
    ACTIONS(278), 1,
      anon_sym_COMMA,
    ACTIONS(280), 1,
      sym_addition,
    ACTIONS(282), 1,
      sym_subtraction,
    ACTIONS(284), 1,
      sym_division,
    ACTIONS(286), 1,
      sym_multiplication,
    STATE(114), 1,
      aux_sym_summarize_clause_repeat1,
    ACTIONS(306), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [2164] = 2,
    ACTIONS(260), 1,
      anon_sym_COMMA,
    ACTIONS(290), 5,
      anon_sym_B,
      anon_sym_KB,
      anon_sym_MB,
      anon_sym_GB,
      anon_sym_TB,
  [2175] = 5,
    ACTIONS(310), 1,
      anon_sym_duringpast,
    ACTIONS(312), 1,
      anon_sym_from,
    ACTIONS(314), 1,
      anon_sym_on,
    STATE(195), 1,
      sym_time_frame,
    ACTIONS(308), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [2192] = 5,
    ACTIONS(310), 1,
      anon_sym_duringpast,
    ACTIONS(312), 1,
      anon_sym_from,
    ACTIONS(314), 1,
      anon_sym_on,
    STATE(193), 1,
      sym_time_frame,
    ACTIONS(316), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [2209] = 5,
    ACTIONS(310), 1,
      anon_sym_duringpast,
    ACTIONS(312), 1,
      anon_sym_from,
    ACTIONS(314), 1,
      anon_sym_on,
    STATE(185), 1,
      sym_time_frame,
    ACTIONS(318), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [2226] = 1,
    ACTIONS(320), 5,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      sym_and,
      sym_or,
  [2234] = 1,
    ACTIONS(322), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_pipe,
      sym_and,
      sym_or,
  [2242] = 1,
    ACTIONS(324), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_pipe,
      sym_and,
      sym_or,
  [2250] = 1,
    ACTIONS(326), 5,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      sym_and,
      sym_or,
  [2258] = 1,
    ACTIONS(328), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_pipe,
      sym_and,
      sym_or,
  [2266] = 4,
    ACTIONS(330), 1,
      anon_sym_COMMA,
    STATE(106), 1,
      aux_sym_list_clause_repeat1,
    STATE(190), 1,
      sym_sort_order,
    ACTIONS(332), 2,
      anon_sym_asc,
      anon_sym_desc,
  [2280] = 3,
    ACTIONS(336), 1,
      anon_sym_COMMA,
    STATE(93), 1,
      aux_sym_summarize_clause_repeat1,
    ACTIONS(334), 3,
      ts_builtin_sym_end,
      sym_pipe,
      sym_by,
  [2292] = 1,
    ACTIONS(324), 5,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      sym_and,
      sym_or,
  [2300] = 3,
    ACTIONS(339), 1,
      sym_division,
    ACTIONS(341), 1,
      sym_multiplication,
    ACTIONS(304), 3,
      anon_sym_RPAREN,
      sym_addition,
      sym_subtraction,
  [2312] = 1,
    ACTIONS(343), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_pipe,
      sym_and,
      sym_or,
  [2320] = 1,
    ACTIONS(326), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_pipe,
      sym_and,
      sym_or,
  [2328] = 1,
    ACTIONS(345), 5,
      anon_sym_ms,
      anon_sym_s,
      anon_sym_min,
      anon_sym_h,
      anon_sym_d,
  [2336] = 1,
    ACTIONS(343), 5,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      sym_and,
      sym_or,
  [2344] = 5,
    ACTIONS(339), 1,
      sym_division,
    ACTIONS(341), 1,
      sym_multiplication,
    ACTIONS(347), 1,
      anon_sym_RPAREN,
    ACTIONS(349), 1,
      sym_addition,
    ACTIONS(351), 1,
      sym_subtraction,
  [2360] = 3,
    ACTIONS(339), 1,
      sym_division,
    ACTIONS(341), 1,
      sym_multiplication,
    ACTIONS(302), 3,
      anon_sym_RPAREN,
      sym_addition,
      sym_subtraction,
  [2372] = 1,
    ACTIONS(353), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_asc,
      anon_sym_desc,
      sym_pipe,
  [2380] = 4,
    ACTIONS(278), 1,
      anon_sym_COMMA,
    ACTIONS(357), 1,
      sym_by,
    STATE(93), 1,
      aux_sym_summarize_clause_repeat1,
    ACTIONS(355), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [2394] = 1,
    ACTIONS(322), 5,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      sym_and,
      sym_or,
  [2402] = 1,
    ACTIONS(328), 5,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      sym_and,
      sym_or,
  [2410] = 4,
    ACTIONS(330), 1,
      anon_sym_COMMA,
    STATE(113), 1,
      aux_sym_list_clause_repeat1,
    STATE(191), 1,
      sym_sort_order,
    ACTIONS(332), 2,
      anon_sym_asc,
      anon_sym_desc,
  [2424] = 1,
    ACTIONS(359), 5,
      ts_builtin_sym_end,
      anon_sym_duringpast,
      anon_sym_from,
      anon_sym_on,
      sym_pipe,
  [2432] = 1,
    ACTIONS(320), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_pipe,
      sym_and,
      sym_or,
  [2440] = 2,
    ACTIONS(361), 2,
      ts_builtin_sym_end,
      sym_pipe,
    ACTIONS(363), 2,
      sym_and,
      sym_or,
  [2449] = 4,
    ACTIONS(365), 1,
      sym_field_name,
    ACTIONS(367), 1,
      aux_sym_int_token1,
    STATE(137), 1,
      sym_field,
    STATE(165), 1,
      sym_duration,
  [2462] = 3,
    ACTIONS(369), 1,
      anon_sym_COMMA,
    STATE(111), 1,
      aux_sym_list_clause_repeat1,
    ACTIONS(353), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [2473] = 4,
    ACTIONS(372), 1,
      anon_sym_DQUOTE,
    ACTIONS(374), 1,
      anon_sym_BSLASH,
    ACTIONS(376), 1,
      aux_sym_string_token2,
    STATE(134), 1,
      aux_sym_string_repeat2,
  [2486] = 3,
    ACTIONS(378), 1,
      anon_sym_COMMA,
    STATE(113), 1,
      aux_sym_list_clause_repeat1,
    ACTIONS(353), 2,
      anon_sym_asc,
      anon_sym_desc,
  [2497] = 3,
    ACTIONS(278), 1,
      anon_sym_COMMA,
    STATE(93), 1,
      aux_sym_summarize_clause_repeat1,
    ACTIONS(381), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [2508] = 3,
    ACTIONS(385), 1,
      anon_sym_COMMA,
    STATE(111), 1,
      aux_sym_list_clause_repeat1,
    ACTIONS(383), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [2519] = 4,
    ACTIONS(365), 1,
      sym_field_name,
    ACTIONS(367), 1,
      aux_sym_int_token1,
    STATE(122), 1,
      sym_field,
    STATE(179), 1,
      sym_duration,
  [2532] = 3,
    ACTIONS(387), 1,
      ts_builtin_sym_end,
    ACTIONS(389), 1,
      sym_pipe,
    STATE(130), 2,
      sym_clause,
      aux_sym_query_repeat1,
  [2543] = 2,
    ACTIONS(363), 2,
      sym_and,
      sym_or,
    ACTIONS(391), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [2552] = 3,
    ACTIONS(389), 1,
      sym_pipe,
    ACTIONS(393), 1,
      ts_builtin_sym_end,
    STATE(117), 2,
      sym_clause,
      aux_sym_query_repeat1,
  [2563] = 4,
    ACTIONS(395), 1,
      anon_sym_DQUOTE,
    ACTIONS(397), 1,
      anon_sym_BSLASH,
    ACTIONS(399), 1,
      aux_sym_string_token2,
    STATE(123), 1,
      aux_sym_string_repeat2,
  [2576] = 4,
    ACTIONS(395), 1,
      anon_sym_SQUOTE,
    ACTIONS(401), 1,
      aux_sym_string_token1,
    ACTIONS(403), 1,
      anon_sym_BSLASH,
    STATE(125), 1,
      aux_sym_string_repeat1,
  [2589] = 3,
    ACTIONS(385), 1,
      anon_sym_COMMA,
    STATE(136), 1,
      aux_sym_list_clause_repeat1,
    ACTIONS(405), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [2600] = 4,
    ACTIONS(374), 1,
      anon_sym_BSLASH,
    ACTIONS(376), 1,
      aux_sym_string_token2,
    ACTIONS(407), 1,
      anon_sym_DQUOTE,
    STATE(134), 1,
      aux_sym_string_repeat2,
  [2613] = 4,
    ACTIONS(372), 1,
      anon_sym_SQUOTE,
    ACTIONS(409), 1,
      aux_sym_string_token1,
    ACTIONS(411), 1,
      anon_sym_BSLASH,
    STATE(135), 1,
      aux_sym_string_repeat1,
  [2626] = 4,
    ACTIONS(407), 1,
      anon_sym_SQUOTE,
    ACTIONS(409), 1,
      aux_sym_string_token1,
    ACTIONS(411), 1,
      anon_sym_BSLASH,
    STATE(135), 1,
      aux_sym_string_repeat1,
  [2639] = 4,
    ACTIONS(413), 1,
      anon_sym_SQUOTE,
    ACTIONS(415), 1,
      aux_sym_string_token1,
    ACTIONS(417), 1,
      anon_sym_BSLASH,
    STATE(124), 1,
      aux_sym_string_repeat1,
  [2652] = 3,
    ACTIONS(385), 1,
      anon_sym_COMMA,
    STATE(115), 1,
      aux_sym_list_clause_repeat1,
    ACTIONS(419), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [2663] = 2,
    ACTIONS(421), 2,
      ts_builtin_sym_end,
      sym_pipe,
    ACTIONS(423), 2,
      sym_and,
      sym_or,
  [2672] = 4,
    ACTIONS(425), 1,
      anon_sym_LPAREN,
    ACTIONS(427), 1,
      sym_field_name,
    STATE(63), 1,
      sym_field,
    STATE(144), 1,
      aux_sym_where_clause_repeat2,
  [2685] = 3,
    ACTIONS(429), 1,
      ts_builtin_sym_end,
    ACTIONS(431), 1,
      sym_pipe,
    STATE(130), 2,
      sym_clause,
      aux_sym_query_repeat1,
  [2696] = 3,
    ACTIONS(385), 1,
      anon_sym_COMMA,
    STATE(111), 1,
      aux_sym_list_clause_repeat1,
    ACTIONS(434), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [2707] = 2,
    ACTIONS(436), 2,
      ts_builtin_sym_end,
      sym_pipe,
    ACTIONS(438), 2,
      sym_and,
      sym_or,
  [2716] = 4,
    ACTIONS(413), 1,
      anon_sym_DQUOTE,
    ACTIONS(440), 1,
      anon_sym_BSLASH,
    ACTIONS(442), 1,
      aux_sym_string_token2,
    STATE(112), 1,
      aux_sym_string_repeat2,
  [2729] = 4,
    ACTIONS(444), 1,
      anon_sym_DQUOTE,
    ACTIONS(446), 1,
      anon_sym_BSLASH,
    ACTIONS(449), 1,
      aux_sym_string_token2,
    STATE(134), 1,
      aux_sym_string_repeat2,
  [2742] = 4,
    ACTIONS(452), 1,
      anon_sym_SQUOTE,
    ACTIONS(454), 1,
      aux_sym_string_token1,
    ACTIONS(457), 1,
      anon_sym_BSLASH,
    STATE(135), 1,
      aux_sym_string_repeat1,
  [2755] = 3,
    ACTIONS(385), 1,
      anon_sym_COMMA,
    STATE(111), 1,
      aux_sym_list_clause_repeat1,
    ACTIONS(460), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [2766] = 3,
    ACTIONS(385), 1,
      anon_sym_COMMA,
    STATE(131), 1,
      aux_sym_list_clause_repeat1,
    ACTIONS(460), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [2777] = 2,
    ACTIONS(423), 2,
      sym_and,
      sym_or,
    ACTIONS(462), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [2786] = 2,
    ACTIONS(438), 2,
      sym_and,
      sym_or,
    ACTIONS(462), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [2795] = 2,
    ACTIONS(464), 1,
      anon_sym_RPAREN,
    ACTIONS(363), 2,
      sym_and,
      sym_or,
  [2803] = 2,
    ACTIONS(466), 1,
      anon_sym_RPAREN,
    ACTIONS(423), 2,
      sym_and,
      sym_or,
  [2811] = 3,
    ACTIONS(468), 1,
      aux_sym_date_token1,
    ACTIONS(470), 1,
      aux_sym_date_token2,
    STATE(177), 1,
      sym_date,
  [2821] = 3,
    ACTIONS(427), 1,
      sym_field_name,
    STATE(62), 1,
      sym_field,
    STATE(145), 1,
      aux_sym_where_clause_repeat2,
  [2831] = 3,
    ACTIONS(427), 1,
      sym_field_name,
    STATE(60), 1,
      sym_field,
    STATE(148), 1,
      aux_sym_where_clause_repeat2,
  [2841] = 3,
    ACTIONS(427), 1,
      sym_field_name,
    STATE(54), 1,
      sym_field,
    STATE(148), 1,
      aux_sym_where_clause_repeat2,
  [2851] = 2,
    ACTIONS(472), 1,
      anon_sym_RPAREN,
    ACTIONS(438), 2,
      sym_and,
      sym_or,
  [2859] = 3,
    ACTIONS(468), 1,
      aux_sym_date_token1,
    ACTIONS(470), 1,
      aux_sym_date_token2,
    STATE(184), 1,
      sym_date,
  [2869] = 3,
    ACTIONS(474), 1,
      sym_field_name,
    STATE(61), 1,
      sym_field,
    STATE(148), 1,
      aux_sym_where_clause_repeat2,
  [2879] = 2,
    ACTIONS(477), 1,
      anon_sym_RPAREN,
    ACTIONS(363), 2,
      sym_and,
      sym_or,
  [2887] = 2,
    ACTIONS(466), 1,
      anon_sym_RPAREN,
    ACTIONS(438), 2,
      sym_and,
      sym_or,
  [2895] = 2,
    ACTIONS(479), 1,
      anon_sym_RPAREN,
    ACTIONS(423), 2,
      sym_and,
      sym_or,
  [2903] = 2,
    ACTIONS(3), 1,
      aux_sym_table_token1,
    STATE(85), 1,
      sym_table,
  [2910] = 2,
    ACTIONS(481), 1,
      aux_sym_int_token1,
    STATE(166), 1,
      sym_int,
  [2917] = 2,
    ACTIONS(483), 1,
      anon_sym_EQ,
    STATE(4), 1,
      sym_alias,
  [2924] = 2,
    ACTIONS(485), 1,
      anon_sym_COMMA,
    ACTIONS(487), 1,
      anon_sym_RBRACK,
  [2931] = 2,
    ACTIONS(483), 1,
      anon_sym_EQ,
    STATE(2), 1,
      sym_alias,
  [2938] = 2,
    ACTIONS(489), 1,
      sym_field_name,
    STATE(92), 1,
      sym_field,
  [2945] = 2,
    ACTIONS(485), 1,
      anon_sym_COMMA,
    ACTIONS(491), 1,
      anon_sym_RBRACK,
  [2952] = 2,
    ACTIONS(485), 1,
      anon_sym_COMMA,
    ACTIONS(493), 1,
      anon_sym_RBRACK,
  [2959] = 2,
    ACTIONS(485), 1,
      anon_sym_COMMA,
    ACTIONS(495), 1,
      anon_sym_RBRACK,
  [2966] = 2,
    ACTIONS(365), 1,
      sym_field_name,
    STATE(127), 1,
      sym_field,
  [2973] = 1,
    ACTIONS(497), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [2978] = 1,
    ACTIONS(421), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [2983] = 2,
    ACTIONS(485), 1,
      anon_sym_COMMA,
    ACTIONS(499), 1,
      anon_sym_RBRACK,
  [2990] = 1,
    ACTIONS(460), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [2995] = 1,
    ACTIONS(501), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [3000] = 1,
    ACTIONS(438), 2,
      sym_and,
      sym_or,
  [3005] = 2,
    ACTIONS(485), 1,
      anon_sym_COMMA,
    ACTIONS(503), 1,
      anon_sym_RBRACK,
  [3012] = 1,
    ACTIONS(505), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [3017] = 1,
    ACTIONS(423), 2,
      sym_and,
      sym_or,
  [3022] = 1,
    ACTIONS(507), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [3027] = 1,
    ACTIONS(509), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [3032] = 1,
    ACTIONS(511), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [3037] = 1,
    ACTIONS(436), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [3042] = 1,
    ACTIONS(363), 2,
      sym_and,
      sym_or,
  [3047] = 2,
    ACTIONS(489), 1,
      sym_field_name,
    STATE(102), 1,
      sym_field,
  [3054] = 1,
    ACTIONS(513), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [3059] = 2,
    ACTIONS(485), 1,
      anon_sym_COMMA,
    ACTIONS(515), 1,
      anon_sym_RBRACK,
  [3066] = 1,
    ACTIONS(405), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [3071] = 2,
    ACTIONS(483), 1,
      anon_sym_EQ,
    STATE(11), 1,
      sym_alias,
  [3078] = 1,
    ACTIONS(462), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [3083] = 1,
    ACTIONS(517), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [3088] = 2,
    ACTIONS(367), 1,
      aux_sym_int_token1,
    STATE(184), 1,
      sym_duration,
  [3095] = 1,
    ACTIONS(519), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [3100] = 1,
    ACTIONS(521), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [3105] = 2,
    ACTIONS(485), 1,
      anon_sym_COMMA,
    ACTIONS(523), 1,
      anon_sym_RBRACK,
  [3112] = 2,
    ACTIONS(3), 1,
      aux_sym_table_token1,
    STATE(86), 1,
      sym_table,
  [3119] = 2,
    ACTIONS(365), 1,
      sym_field_name,
    STATE(102), 1,
      sym_field,
  [3126] = 1,
    ACTIONS(525), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [3131] = 1,
    ACTIONS(527), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [3136] = 1,
    ACTIONS(529), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [3141] = 2,
    ACTIONS(485), 1,
      anon_sym_COMMA,
    ACTIONS(531), 1,
      anon_sym_RBRACK,
  [3148] = 1,
    ACTIONS(533), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [3153] = 2,
    ACTIONS(485), 1,
      anon_sym_COMMA,
    ACTIONS(535), 1,
      anon_sym_RBRACK,
  [3160] = 1,
    ACTIONS(537), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [3165] = 1,
    ACTIONS(539), 1,
      anon_sym_to,
  [3169] = 1,
    ACTIONS(541), 1,
      sym_field_property,
  [3173] = 1,
    ACTIONS(185), 1,
      anon_sym_LPAREN_RPAREN,
  [3177] = 1,
    ACTIONS(543), 1,
      sym_field_property,
  [3181] = 1,
    ACTIONS(545), 1,
      sym_field_name,
  [3185] = 1,
    ACTIONS(547), 1,
      sym_field_name,
  [3189] = 1,
    ACTIONS(509), 1,
      anon_sym_to,
  [3193] = 1,
    ACTIONS(511), 1,
      anon_sym_to,
  [3197] = 1,
    ACTIONS(549), 1,
      sym_field_name,
  [3201] = 1,
    ACTIONS(551), 1,
      sym_field_name,
  [3205] = 1,
    ACTIONS(553), 1,
      anon_sym_to,
  [3209] = 1,
    ACTIONS(485), 1,
      anon_sym_COMMA,
  [3213] = 1,
    ACTIONS(555), 1,
      sym_field_name,
  [3217] = 1,
    ACTIONS(557), 1,
      sym_field_name,
  [3221] = 1,
    ACTIONS(559), 1,
      ts_builtin_sym_end,
  [3225] = 1,
    ACTIONS(561), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 42,
  [SMALL_STATE(4)] = 84,
  [SMALL_STATE(5)] = 126,
  [SMALL_STATE(6)] = 168,
  [SMALL_STATE(7)] = 210,
  [SMALL_STATE(8)] = 252,
  [SMALL_STATE(9)] = 294,
  [SMALL_STATE(10)] = 336,
  [SMALL_STATE(11)] = 378,
  [SMALL_STATE(12)] = 420,
  [SMALL_STATE(13)] = 462,
  [SMALL_STATE(14)] = 504,
  [SMALL_STATE(15)] = 547,
  [SMALL_STATE(16)] = 590,
  [SMALL_STATE(17)] = 633,
  [SMALL_STATE(18)] = 676,
  [SMALL_STATE(19)] = 719,
  [SMALL_STATE(20)] = 762,
  [SMALL_STATE(21)] = 805,
  [SMALL_STATE(22)] = 848,
  [SMALL_STATE(23)] = 891,
  [SMALL_STATE(24)] = 934,
  [SMALL_STATE(25)] = 977,
  [SMALL_STATE(26)] = 1020,
  [SMALL_STATE(27)] = 1063,
  [SMALL_STATE(28)] = 1106,
  [SMALL_STATE(29)] = 1149,
  [SMALL_STATE(30)] = 1192,
  [SMALL_STATE(31)] = 1220,
  [SMALL_STATE(32)] = 1243,
  [SMALL_STATE(33)] = 1278,
  [SMALL_STATE(34)] = 1297,
  [SMALL_STATE(35)] = 1322,
  [SMALL_STATE(36)] = 1340,
  [SMALL_STATE(37)] = 1355,
  [SMALL_STATE(38)] = 1372,
  [SMALL_STATE(39)] = 1387,
  [SMALL_STATE(40)] = 1413,
  [SMALL_STATE(41)] = 1427,
  [SMALL_STATE(42)] = 1447,
  [SMALL_STATE(43)] = 1465,
  [SMALL_STATE(44)] = 1479,
  [SMALL_STATE(45)] = 1493,
  [SMALL_STATE(46)] = 1519,
  [SMALL_STATE(47)] = 1545,
  [SMALL_STATE(48)] = 1571,
  [SMALL_STATE(49)] = 1585,
  [SMALL_STATE(50)] = 1611,
  [SMALL_STATE(51)] = 1631,
  [SMALL_STATE(52)] = 1657,
  [SMALL_STATE(53)] = 1672,
  [SMALL_STATE(54)] = 1687,
  [SMALL_STATE(55)] = 1708,
  [SMALL_STATE(56)] = 1725,
  [SMALL_STATE(57)] = 1742,
  [SMALL_STATE(58)] = 1759,
  [SMALL_STATE(59)] = 1776,
  [SMALL_STATE(60)] = 1791,
  [SMALL_STATE(61)] = 1812,
  [SMALL_STATE(62)] = 1833,
  [SMALL_STATE(63)] = 1854,
  [SMALL_STATE(64)] = 1875,
  [SMALL_STATE(65)] = 1890,
  [SMALL_STATE(66)] = 1907,
  [SMALL_STATE(67)] = 1924,
  [SMALL_STATE(68)] = 1936,
  [SMALL_STATE(69)] = 1948,
  [SMALL_STATE(70)] = 1960,
  [SMALL_STATE(71)] = 1974,
  [SMALL_STATE(72)] = 1988,
  [SMALL_STATE(73)] = 2014,
  [SMALL_STATE(74)] = 2028,
  [SMALL_STATE(75)] = 2042,
  [SMALL_STATE(76)] = 2054,
  [SMALL_STATE(77)] = 2066,
  [SMALL_STATE(78)] = 2080,
  [SMALL_STATE(79)] = 2092,
  [SMALL_STATE(80)] = 2111,
  [SMALL_STATE(81)] = 2126,
  [SMALL_STATE(82)] = 2141,
  [SMALL_STATE(83)] = 2164,
  [SMALL_STATE(84)] = 2175,
  [SMALL_STATE(85)] = 2192,
  [SMALL_STATE(86)] = 2209,
  [SMALL_STATE(87)] = 2226,
  [SMALL_STATE(88)] = 2234,
  [SMALL_STATE(89)] = 2242,
  [SMALL_STATE(90)] = 2250,
  [SMALL_STATE(91)] = 2258,
  [SMALL_STATE(92)] = 2266,
  [SMALL_STATE(93)] = 2280,
  [SMALL_STATE(94)] = 2292,
  [SMALL_STATE(95)] = 2300,
  [SMALL_STATE(96)] = 2312,
  [SMALL_STATE(97)] = 2320,
  [SMALL_STATE(98)] = 2328,
  [SMALL_STATE(99)] = 2336,
  [SMALL_STATE(100)] = 2344,
  [SMALL_STATE(101)] = 2360,
  [SMALL_STATE(102)] = 2372,
  [SMALL_STATE(103)] = 2380,
  [SMALL_STATE(104)] = 2394,
  [SMALL_STATE(105)] = 2402,
  [SMALL_STATE(106)] = 2410,
  [SMALL_STATE(107)] = 2424,
  [SMALL_STATE(108)] = 2432,
  [SMALL_STATE(109)] = 2440,
  [SMALL_STATE(110)] = 2449,
  [SMALL_STATE(111)] = 2462,
  [SMALL_STATE(112)] = 2473,
  [SMALL_STATE(113)] = 2486,
  [SMALL_STATE(114)] = 2497,
  [SMALL_STATE(115)] = 2508,
  [SMALL_STATE(116)] = 2519,
  [SMALL_STATE(117)] = 2532,
  [SMALL_STATE(118)] = 2543,
  [SMALL_STATE(119)] = 2552,
  [SMALL_STATE(120)] = 2563,
  [SMALL_STATE(121)] = 2576,
  [SMALL_STATE(122)] = 2589,
  [SMALL_STATE(123)] = 2600,
  [SMALL_STATE(124)] = 2613,
  [SMALL_STATE(125)] = 2626,
  [SMALL_STATE(126)] = 2639,
  [SMALL_STATE(127)] = 2652,
  [SMALL_STATE(128)] = 2663,
  [SMALL_STATE(129)] = 2672,
  [SMALL_STATE(130)] = 2685,
  [SMALL_STATE(131)] = 2696,
  [SMALL_STATE(132)] = 2707,
  [SMALL_STATE(133)] = 2716,
  [SMALL_STATE(134)] = 2729,
  [SMALL_STATE(135)] = 2742,
  [SMALL_STATE(136)] = 2755,
  [SMALL_STATE(137)] = 2766,
  [SMALL_STATE(138)] = 2777,
  [SMALL_STATE(139)] = 2786,
  [SMALL_STATE(140)] = 2795,
  [SMALL_STATE(141)] = 2803,
  [SMALL_STATE(142)] = 2811,
  [SMALL_STATE(143)] = 2821,
  [SMALL_STATE(144)] = 2831,
  [SMALL_STATE(145)] = 2841,
  [SMALL_STATE(146)] = 2851,
  [SMALL_STATE(147)] = 2859,
  [SMALL_STATE(148)] = 2869,
  [SMALL_STATE(149)] = 2879,
  [SMALL_STATE(150)] = 2887,
  [SMALL_STATE(151)] = 2895,
  [SMALL_STATE(152)] = 2903,
  [SMALL_STATE(153)] = 2910,
  [SMALL_STATE(154)] = 2917,
  [SMALL_STATE(155)] = 2924,
  [SMALL_STATE(156)] = 2931,
  [SMALL_STATE(157)] = 2938,
  [SMALL_STATE(158)] = 2945,
  [SMALL_STATE(159)] = 2952,
  [SMALL_STATE(160)] = 2959,
  [SMALL_STATE(161)] = 2966,
  [SMALL_STATE(162)] = 2973,
  [SMALL_STATE(163)] = 2978,
  [SMALL_STATE(164)] = 2983,
  [SMALL_STATE(165)] = 2990,
  [SMALL_STATE(166)] = 2995,
  [SMALL_STATE(167)] = 3000,
  [SMALL_STATE(168)] = 3005,
  [SMALL_STATE(169)] = 3012,
  [SMALL_STATE(170)] = 3017,
  [SMALL_STATE(171)] = 3022,
  [SMALL_STATE(172)] = 3027,
  [SMALL_STATE(173)] = 3032,
  [SMALL_STATE(174)] = 3037,
  [SMALL_STATE(175)] = 3042,
  [SMALL_STATE(176)] = 3047,
  [SMALL_STATE(177)] = 3054,
  [SMALL_STATE(178)] = 3059,
  [SMALL_STATE(179)] = 3066,
  [SMALL_STATE(180)] = 3071,
  [SMALL_STATE(181)] = 3078,
  [SMALL_STATE(182)] = 3083,
  [SMALL_STATE(183)] = 3088,
  [SMALL_STATE(184)] = 3095,
  [SMALL_STATE(185)] = 3100,
  [SMALL_STATE(186)] = 3105,
  [SMALL_STATE(187)] = 3112,
  [SMALL_STATE(188)] = 3119,
  [SMALL_STATE(189)] = 3126,
  [SMALL_STATE(190)] = 3131,
  [SMALL_STATE(191)] = 3136,
  [SMALL_STATE(192)] = 3141,
  [SMALL_STATE(193)] = 3148,
  [SMALL_STATE(194)] = 3153,
  [SMALL_STATE(195)] = 3160,
  [SMALL_STATE(196)] = 3165,
  [SMALL_STATE(197)] = 3169,
  [SMALL_STATE(198)] = 3173,
  [SMALL_STATE(199)] = 3177,
  [SMALL_STATE(200)] = 3181,
  [SMALL_STATE(201)] = 3185,
  [SMALL_STATE(202)] = 3189,
  [SMALL_STATE(203)] = 3193,
  [SMALL_STATE(204)] = 3197,
  [SMALL_STATE(205)] = 3201,
  [SMALL_STATE(206)] = 3205,
  [SMALL_STATE(207)] = 3209,
  [SMALL_STATE(208)] = 3213,
  [SMALL_STATE(209)] = 3217,
  [SMALL_STATE(210)] = 3221,
  [SMALL_STATE(211)] = 3225,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_where_clause_repeat1, 2), SHIFT_REPEAT(91),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_where_clause_repeat1, 2), SHIFT_REPEAT(133),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_where_clause_repeat1, 2), SHIFT_REPEAT(126),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_where_clause_repeat1, 2), SHIFT_REPEAT(83),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_where_clause_repeat1, 2), SHIFT_REPEAT(207),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_where_clause_repeat1, 2), SHIFT_REPEAT(96),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_where_clause_repeat1, 2), SHIFT_REPEAT(97),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_where_clause_repeat1, 2), SHIFT_REPEAT(97),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_where_clause_repeat1, 2), SHIFT_REPEAT(207),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_repeat1, 2),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_repeat1, 2), SHIFT_REPEAT(197),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_field_repeat1, 2),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_equals, 1),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_equals, 1),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_where_clause_repeat1, 2),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_where_clause_repeat1, 2),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_min, 1),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 1),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate_field, 1),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate_function, 2, .production_id = 1),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 1),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 1),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 3),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 4),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 2),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 2),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias, 1),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias, 1),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate_field, 1),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [235] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_repeat1, 2), SHIFT_REPEAT(199),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_min, 1),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int, 1),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate, 1),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_division, 3),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_parenthesized_expression, 3),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 3),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_summarize_clause, 4),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 4),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_multiplication, 3),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate_function, 2, .production_id = 1),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_summarize_clause_repeat1, 4),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_addition, 3),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_subtraction, 3),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compute_clause, 4),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_clause, 1),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_clause, 2),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_clause, 2),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_byte, 2),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ip_address, 1),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 1),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_summarize_clause_repeat1, 2),
  [336] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_summarize_clause_repeat1, 2), SHIFT_REPEAT(200),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_clause_repeat1, 2),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_summarize_clause, 5),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 1),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_clause, 5),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [369] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_clause_repeat1, 2), SHIFT_REPEAT(188),
  [372] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [378] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_clause_repeat1, 2), SHIFT_REPEAT(176),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compute_clause, 5),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_clause, 3),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 2),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_clause, 4),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 1),
  [395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [397] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_summarize_clause, 6),
  [407] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [411] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [413] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_clause, 2),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_clause, 8),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_repeat1, 2),
  [431] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_repeat1, 2), SHIFT_REPEAT(32),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_summarize_clause, 8),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_clause, 6),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [440] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2),
  [446] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(134),
  [449] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(134),
  [452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [454] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(135),
  [457] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(135),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_summarize_clause, 7),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_clause, 7),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [468] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [474] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_where_clause_repeat2, 2), SHIFT_REPEAT(41),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_duration, 2),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit_clause, 2),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_clause, 9),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_clause, 10),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 1),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date_time, 1),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time_frame, 4),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clause, 2),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time_frame, 2),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_clause, 3),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sort_order, 1),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sort_clause, 3),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sort_clause, 4),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_clause, 3),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_clause, 2),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_where_clause_repeat2, 4),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_where_clause_repeat2, 7),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_where_clause_repeat2, 6),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [561] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
