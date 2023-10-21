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
#define STATE_COUNT 211
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 129
#define ALIAS_COUNT 0
#define TOKEN_COUNT 85
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
  sym_count = 78,
  sym_avg = 79,
  sym_sum = 80,
  sym_max = 81,
  sym_last = 82,
  anon_sym_LPAREN_RPAREN = 83,
  sym_by = 84,
  sym_source_file = 85,
  sym_query = 86,
  sym_table = 87,
  sym_clause = 88,
  sym_select_clause = 89,
  sym_include_clause = 90,
  sym_list_clause = 91,
  sym_sort_clause = 92,
  sym_summarize_clause = 93,
  sym_compute_clause = 94,
  sym_where_clause = 95,
  sym_with_clause = 96,
  sym_limit_clause = 97,
  sym_expression = 98,
  sym_expression_addition = 99,
  sym_expression_subtraction = 100,
  sym_expression_multiplication = 101,
  sym_expression_division = 102,
  sym_expression_parenthesized_expression = 103,
  sym_time_frame = 104,
  sym_field = 105,
  sym_sort_order = 106,
  sym_string = 107,
  sym_int = 108,
  sym_boolean = 109,
  sym_date = 110,
  sym_date_time = 111,
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
  [9] = 2,
  [10] = 7,
  [11] = 11,
  [12] = 11,
  [13] = 5,
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
  [36] = 33,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 33,
  [46] = 46,
  [47] = 47,
  [48] = 41,
  [49] = 46,
  [50] = 50,
  [51] = 46,
  [52] = 52,
  [53] = 41,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 50,
  [60] = 50,
  [61] = 40,
  [62] = 62,
  [63] = 38,
  [64] = 52,
  [65] = 39,
  [66] = 30,
  [67] = 67,
  [68] = 52,
  [69] = 44,
  [70] = 70,
  [71] = 31,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 42,
  [78] = 54,
  [79] = 47,
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
  [92] = 90,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 94,
  [97] = 95,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 88,
  [104] = 93,
  [105] = 80,
  [106] = 106,
  [107] = 101,
  [108] = 81,
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
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 113,
  [127] = 127,
  [128] = 120,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 114,
  [134] = 125,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 109,
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
  [190] = 176,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 171,
  [197] = 197,
  [198] = 172,
  [199] = 199,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(258);
      if (lookahead == '!') ADVANCE(108);
      if (lookahead == '"') ADVANCE(312);
      if (lookahead == '\'') ADVANCE(313);
      if (lookahead == '(') ADVANCE(270);
      if (lookahead == ')') ADVANCE(271);
      if (lookahead == '*') ADVANCE(403);
      if (lookahead == '+') ADVANCE(400);
      if (lookahead == ',') ADVANCE(262);
      if (lookahead == '-') ADVANCE(401);
      if (lookahead == '.') ADVANCE(278);
      if (lookahead == '/') ADVANCE(402);
      if (lookahead == '<') ADVANCE(408);
      if (lookahead == '=') ADVANCE(398);
      if (lookahead == '>') ADVANCE(406);
      if (lookahead == 'B') ADVANCE(372);
      if (lookahead == 'G') ADVANCE(109);
      if (lookahead == 'K') ADVANCE(110);
      if (lookahead == 'M') ADVANCE(111);
      if (lookahead == 'T') ADVANCE(112);
      if (lookahead == '[') ADVANCE(267);
      if (lookahead == '\\') ADVANCE(316);
      if (lookahead == ']') ADVANCE(268);
      if (lookahead == 'a') ADVANCE(158);
      if (lookahead == 'b') ADVANCE(200);
      if (lookahead == 'c') ADVANCE(168);
      if (lookahead == 'd') ADVANCE(385);
      if (lookahead == 'f') ADVANCE(117);
      if (lookahead == 'h') ADVANCE(383);
      if (lookahead == 'i') ADVANCE(159);
      if (lookahead == 'l') ADVANCE(120);
      if (lookahead == 'm') ADVANCE(118);
      if (lookahead == 'o') ADVANCE(161);
      if (lookahead == 's') ADVANCE(379);
      if (lookahead == 't') ADVANCE(169);
      if (lookahead == 'v') ADVANCE(207);
      if (lookahead == 'w') ADVANCE(139);
      if (lookahead == '|') ADVANCE(399);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(324);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(337);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(229);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(252);
      if (lookahead != 0) ADVANCE(254);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(226);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(250);
      if (lookahead != 0) ADVANCE(253);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(54)
      if (lookahead == '"') ADVANCE(312);
      if (lookahead == '\\') ADVANCE(316);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(317);
      if (lookahead != 0) ADVANCE(318);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(55)
      if (lookahead == '\'') ADVANCE(313);
      if (lookahead == '\\') ADVANCE(316);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(314);
      if (lookahead != 0) ADVANCE(315);
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(11)
      if (lookahead == ' ') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(336);
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
      if (lookahead != 0) ADVANCE(254);
      END_STATE();
    case 12:
      if (lookahead == '\n') SKIP(11)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(10);
      if (lookahead != 0) ADVANCE(253);
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
      if (lookahead == ':') ADVANCE(239);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(340);
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
      if (lookahead == ' ') ADVANCE(215);
      END_STATE();
    case 36:
      if (lookahead == ' ') ADVANCE(215);
      if (lookahead == 'h') ADVANCE(272);
      END_STATE();
    case 37:
      if (lookahead == ' ') ADVANCE(215);
      if (lookahead == 'i') ADVANCE(192);
      END_STATE();
    case 38:
      if (lookahead == ' ') ADVANCE(215);
      if (lookahead == 'l') ADVANCE(196);
      END_STATE();
    case 39:
      if (lookahead == ' ') ADVANCE(215);
      if (lookahead == 'm') ADVANCE(121);
      END_STATE();
    case 40:
      if (lookahead == ' ') ADVANCE(215);
      if (lookahead == 'p') ADVANCE(198);
      END_STATE();
    case 41:
      if (lookahead == ' ') ADVANCE(215);
      if (lookahead == 'r') ADVANCE(131);
      END_STATE();
    case 42:
      if (lookahead == ' ') ADVANCE(215);
      if (lookahead == 't') ADVANCE(261);
      END_STATE();
    case 43:
      if (lookahead == ' ') ADVANCE(215);
      if (lookahead == 't') ADVANCE(263);
      END_STATE();
    case 44:
      if (lookahead == ' ') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      END_STATE();
    case 45:
      if (lookahead == ' ') ADVANCE(216);
      END_STATE();
    case 46:
      if (lookahead == ' ') ADVANCE(227);
      END_STATE();
    case 47:
      if (lookahead == ' ') ADVANCE(246);
      END_STATE();
    case 48:
      if (lookahead == ' ') ADVANCE(205);
      END_STATE();
    case 49:
      if (lookahead == ' ') ADVANCE(244);
      END_STATE();
    case 50:
      if (lookahead == ' ') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(344);
      END_STATE();
    case 51:
      if (lookahead == ' ') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(346);
      END_STATE();
    case 52:
      if (lookahead == ' ') ADVANCE(247);
      END_STATE();
    case 53:
      if (lookahead == '"') ADVANCE(312);
      if (lookahead == '\'') ADVANCE(313);
      if (lookahead == '[') ADVANCE(267);
      if (lookahead == 'f') ADVANCE(359);
      if (lookahead == 't') ADVANCE(367);
      if (lookahead == 'v') ADVANCE(370);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(53)
      if (('a' <= lookahead && lookahead <= 'e')) ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(319);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 54:
      if (lookahead == '"') ADVANCE(312);
      if (lookahead == '\\') ADVANCE(316);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(54)
      END_STATE();
    case 55:
      if (lookahead == '\'') ADVANCE(313);
      if (lookahead == '\\') ADVANCE(316);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(55)
      END_STATE();
    case 56:
      if (lookahead == '(') ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(56)
      if (lookahead == '#' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 57:
      if (lookahead == '(') ADVANCE(269);
      if (lookahead == 'a') ADVANCE(291);
      if (lookahead == 'c') ADVANCE(285);
      if (lookahead == 'l') ADVANCE(279);
      if (lookahead == 'm') ADVANCE(280);
      if (lookahead == 's') ADVANCE(289);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(57)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(326);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 58:
      if (lookahead == '(') ADVANCE(269);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(58)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(327);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 59:
      if (lookahead == ')') ADVANCE(429);
      END_STATE();
    case 60:
      if (lookahead == '-') ADVANCE(231);
      END_STATE();
    case 61:
      if (lookahead == '-') ADVANCE(232);
      END_STATE();
    case 62:
      if (lookahead == '.') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 63:
      if (lookahead == '.') ADVANCE(211);
      END_STATE();
    case 64:
      if (lookahead == '.') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 65:
      if (lookahead == '.') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 66:
      if (lookahead == '/') ADVANCE(213);
      END_STATE();
    case 67:
      if (lookahead == ':') ADVANCE(249);
      END_STATE();
    case 68:
      if (lookahead == ':') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(67);
      END_STATE();
    case 69:
      if (lookahead == ':') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(68);
      END_STATE();
    case 70:
      if (lookahead == ':') ADVANCE(66);
      END_STATE();
    case 71:
      if (lookahead == ':') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(394);
      END_STATE();
    case 72:
      if (lookahead == ':') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(83);
      END_STATE();
    case 73:
      if (lookahead == ':') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(90);
      END_STATE();
    case 74:
      if (lookahead == ':') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(102);
      END_STATE();
    case 75:
      if (lookahead == ':') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(106);
      END_STATE();
    case 76:
      if (lookahead == ':') ADVANCE(75);
      END_STATE();
    case 77:
      if (lookahead == ':') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(76);
      END_STATE();
    case 78:
      if (lookahead == ':') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(77);
      END_STATE();
    case 79:
      if (lookahead == ':') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(78);
      END_STATE();
    case 80:
      if (lookahead == ':') ADVANCE(71);
      END_STATE();
    case 81:
      if (lookahead == ':') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(82);
      END_STATE();
    case 82:
      if (lookahead == ':') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(80);
      END_STATE();
    case 83:
      if (lookahead == ':') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(81);
      END_STATE();
    case 84:
      if (lookahead == ':') ADVANCE(248);
      END_STATE();
    case 85:
      if (lookahead == ':') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(84);
      END_STATE();
    case 86:
      if (lookahead == ':') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(85);
      END_STATE();
    case 87:
      if (lookahead == ':') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(86);
      END_STATE();
    case 88:
      if (lookahead == ':') ADVANCE(72);
      END_STATE();
    case 89:
      if (lookahead == ':') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(91);
      END_STATE();
    case 90:
      if (lookahead == ':') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(89);
      END_STATE();
    case 91:
      if (lookahead == ':') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(88);
      END_STATE();
    case 92:
      if (lookahead == ':') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      END_STATE();
    case 93:
      if (lookahead == ':') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(219);
      END_STATE();
    case 94:
      if (lookahead == ':') ADVANCE(235);
      END_STATE();
    case 95:
      if (lookahead == ':') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      END_STATE();
    case 96:
      if (lookahead == ':') ADVANCE(236);
      END_STATE();
    case 97:
      if (lookahead == ':') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      END_STATE();
    case 98:
      if (lookahead == ':') ADVANCE(237);
      END_STATE();
    case 99:
      if (lookahead == ':') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      END_STATE();
    case 100:
      if (lookahead == ':') ADVANCE(73);
      END_STATE();
    case 101:
      if (lookahead == ':') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(103);
      END_STATE();
    case 102:
      if (lookahead == ':') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(101);
      END_STATE();
    case 103:
      if (lookahead == ':') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(100);
      END_STATE();
    case 104:
      if (lookahead == ':') ADVANCE(74);
      END_STATE();
    case 105:
      if (lookahead == ':') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(107);
      END_STATE();
    case 106:
      if (lookahead == ':') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(105);
      END_STATE();
    case 107:
      if (lookahead == ':') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(104);
      END_STATE();
    case 108:
      if (lookahead == '=') ADVANCE(405);
      if (lookahead == 'i') ADVANCE(162);
      END_STATE();
    case 109:
      if (lookahead == 'B') ADVANCE(375);
      END_STATE();
    case 110:
      if (lookahead == 'B') ADVANCE(373);
      END_STATE();
    case 111:
      if (lookahead == 'B') ADVANCE(374);
      END_STATE();
    case 112:
      if (lookahead == 'B') ADVANCE(376);
      END_STATE();
    case 113:
      if (lookahead == 'M') ADVANCE(357);
      END_STATE();
    case 114:
      if (lookahead == 'M') ADVANCE(355);
      END_STATE();
    case 115:
      if (lookahead == 'M') ADVANCE(358);
      END_STATE();
    case 116:
      if (lookahead == 'M') ADVANCE(356);
      END_STATE();
    case 117:
      if (lookahead == 'a') ADVANCE(149);
      if (lookahead == 'r') ADVANCE(174);
      END_STATE();
    case 118:
      if (lookahead == 'a') ADVANCE(199);
      if (lookahead == 'i') ADVANCE(163);
      if (lookahead == 's') ADVANCE(377);
      END_STATE();
    case 119:
      if (lookahead == 'a') ADVANCE(307);
      if (lookahead == 'c') ADVANCE(301);
      if (lookahead == 'l') ADVANCE(295);
      if (lookahead == 'm') ADVANCE(296);
      if (lookahead == 's') ADVANCE(305);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(119)
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 120:
      if (lookahead == 'a') ADVANCE(185);
      if (lookahead == 'i') ADVANCE(156);
      END_STATE();
    case 121:
      if (lookahead == 'a') ADVANCE(181);
      END_STATE();
    case 122:
      if (lookahead == 'a') ADVANCE(187);
      END_STATE();
    case 123:
      if (lookahead == 'c') ADVANCE(310);
      END_STATE();
    case 124:
      if (lookahead == 'c') ADVANCE(311);
      END_STATE();
    case 125:
      if (lookahead == 'c') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(49);
      END_STATE();
    case 126:
      if (lookahead == 'd') ADVANCE(412);
      END_STATE();
    case 127:
      if (lookahead == 'd') ADVANCE(135);
      END_STATE();
    case 128:
      if (lookahead == 'e') ADVANCE(184);
      if (lookahead == 'u') ADVANCE(178);
      END_STATE();
    case 129:
      if (lookahead == 'e') ADVANCE(332);
      END_STATE();
    case 130:
      if (lookahead == 'e') ADVANCE(334);
      END_STATE();
    case 131:
      if (lookahead == 'e') ADVANCE(266);
      END_STATE();
    case 132:
      if (lookahead == 'e') ADVANCE(265);
      END_STATE();
    case 133:
      if (lookahead == 'e') ADVANCE(264);
      END_STATE();
    case 134:
      if (lookahead == 'e') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(49);
      END_STATE();
    case 135:
      if (lookahead == 'e') ADVANCE(260);
      END_STATE();
    case 136:
      if (lookahead == 'e') ADVANCE(182);
      END_STATE();
    case 137:
      if (lookahead == 'g') ADVANCE(417);
      END_STATE();
    case 138:
      if (lookahead == 'g') ADVANCE(22);
      END_STATE();
    case 139:
      if (lookahead == 'h') ADVANCE(136);
      if (lookahead == 'i') ADVANCE(188);
      END_STATE();
    case 140:
      if (lookahead == 'h') ADVANCE(272);
      END_STATE();
    case 141:
      if (lookahead == 'h') ADVANCE(134);
      if (lookahead == 'i') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(255);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(255);
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
      if (lookahead == 's') ADVANCE(377);
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
      if (lookahead == 'm') ADVANCE(420);
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
      if (lookahead == 'n') ADVANCE(126);
      END_STATE();
    case 158:
      if (lookahead == 'n') ADVANCE(126);
      if (lookahead == 's') ADVANCE(123);
      if (lookahead == 'v') ADVANCE(137);
      END_STATE();
    case 159:
      if (lookahead == 'n') ADVANCE(410);
      END_STATE();
    case 160:
      if (lookahead == 'n') ADVANCE(277);
      END_STATE();
    case 161:
      if (lookahead == 'n') ADVANCE(277);
      if (lookahead == 'r') ADVANCE(413);
      END_STATE();
    case 162:
      if (lookahead == 'n') ADVANCE(411);
      END_STATE();
    case 163:
      if (lookahead == 'n') ADVANCE(380);
      END_STATE();
    case 164:
      if (lookahead == 'n') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(255);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(255);
      END_STATE();
    case 171:
      if (lookahead == 'o') ADVANCE(180);
      if (lookahead == 'u') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(255);
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
      if (lookahead == 'p') ADVANCE(122);
      END_STATE();
    case 177:
      if (lookahead == 'r') ADVANCE(413);
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
      if (lookahead == 'r') ADVANCE(131);
      END_STATE();
    case 183:
      if (lookahead == 's') ADVANCE(123);
      END_STATE();
    case 184:
      if (lookahead == 's') ADVANCE(124);
      END_STATE();
    case 185:
      if (lookahead == 's') ADVANCE(189);
      END_STATE();
    case 186:
      if (lookahead == 's') ADVANCE(130);
      END_STATE();
    case 187:
      if (lookahead == 's') ADVANCE(193);
      END_STATE();
    case 188:
      if (lookahead == 't') ADVANCE(140);
      END_STATE();
    case 189:
      if (lookahead == 't') ADVANCE(426);
      END_STATE();
    case 190:
      if (lookahead == 't') ADVANCE(261);
      END_STATE();
    case 191:
      if (lookahead == 't') ADVANCE(414);
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
      if (lookahead == 't') ADVANCE(132);
      END_STATE();
    case 196:
      if (lookahead == 'u') ADVANCE(127);
      END_STATE();
    case 197:
      if (lookahead == 'u') ADVANCE(129);
      END_STATE();
    case 198:
      if (lookahead == 'u') ADVANCE(195);
      END_STATE();
    case 199:
      if (lookahead == 'x') ADVANCE(423);
      END_STATE();
    case 200:
      if (lookahead == 'y') ADVANCE(430);
      END_STATE();
    case 201:
      if (lookahead == 'z') ADVANCE(133);
      END_STATE();
    case 202:
      if (lookahead == 'A' ||
          lookahead == 'P') ADVANCE(113);
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
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(206)
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 207:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 208:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(330);
      END_STATE();
    case 209:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(397);
      END_STATE();
    case 210:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      END_STATE();
    case 211:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(388);
      END_STATE();
    case 212:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(390);
      END_STATE();
    case 213:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(396);
      END_STATE();
    case 214:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(49);
      END_STATE();
    case 215:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(342);
      END_STATE();
    case 216:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      END_STATE();
    case 217:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(350);
      END_STATE();
    case 218:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(351);
      END_STATE();
    case 219:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(348);
      END_STATE();
    case 220:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(347);
      END_STATE();
    case 221:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(352);
      END_STATE();
    case 222:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 223:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(353);
      END_STATE();
    case 224:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(349);
      END_STATE();
    case 225:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(354);
      END_STATE();
    case 226:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(33);
      END_STATE();
    case 227:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(344);
      END_STATE();
    case 228:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 229:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(214);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(255);
      END_STATE();
    case 230:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      END_STATE();
    case 231:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(243);
      END_STATE();
    case 232:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(217);
      END_STATE();
    case 233:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      END_STATE();
    case 234:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(220);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(228);
      END_STATE();
    case 241:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      END_STATE();
    case 242:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(234);
      END_STATE();
    case 243:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      END_STATE();
    case 244:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(346);
      END_STATE();
    case 245:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      END_STATE();
    case 246:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(242);
      END_STATE();
    case 247:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      END_STATE();
    case 248:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(79);
      END_STATE();
    case 249:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(87);
      END_STATE();
    case 250:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(33);
      END_STATE();
    case 251:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(49);
      END_STATE();
    case 252:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(255);
      END_STATE();
    case 253:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(33);
      END_STATE();
    case 254:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(255);
      END_STATE();
    case 255:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(49);
      END_STATE();
    case 256:
      if (eof) ADVANCE(258);
      if (lookahead == '!') ADVANCE(108);
      if (lookahead == '(') ADVANCE(59);
      if (lookahead == ')') ADVANCE(271);
      if (lookahead == '*') ADVANCE(403);
      if (lookahead == '+') ADVANCE(400);
      if (lookahead == ',') ADVANCE(262);
      if (lookahead == '-') ADVANCE(401);
      if (lookahead == '.') ADVANCE(278);
      if (lookahead == '/') ADVANCE(402);
      if (lookahead == '<') ADVANCE(408);
      if (lookahead == '=') ADVANCE(398);
      if (lookahead == '>') ADVANCE(406);
      if (lookahead == 'a') ADVANCE(183);
      if (lookahead == 'b') ADVANCE(200);
      if (lookahead == 'd') ADVANCE(128);
      if (lookahead == 'f') ADVANCE(179);
      if (lookahead == 'i') ADVANCE(159);
      if (lookahead == 'o') ADVANCE(160);
      if (lookahead == '|') ADVANCE(399);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(256)
      END_STATE();
    case 257:
      if (eof) ADVANCE(258);
      if (lookahead == ')') ADVANCE(271);
      if (lookahead == ',') ADVANCE(262);
      if (lookahead == 'B') ADVANCE(372);
      if (lookahead == 'G') ADVANCE(109);
      if (lookahead == 'K') ADVANCE(110);
      if (lookahead == 'M') ADVANCE(111);
      if (lookahead == 'T') ADVANCE(112);
      if (lookahead == ']') ADVANCE(268);
      if (lookahead == 'a') ADVANCE(157);
      if (lookahead == 'd') ADVANCE(384);
      if (lookahead == 'h') ADVANCE(383);
      if (lookahead == 'm') ADVANCE(146);
      if (lookahead == 'o') ADVANCE(177);
      if (lookahead == 's') ADVANCE(378);
      if (lookahead == '|') ADVANCE(399);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(257)
      END_STATE();
    case 258:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_table_token1);
      if (lookahead == '#' ||
          lookahead == '.' ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_list);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_sort);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_summarize);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_compute);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == ')') ADVANCE(429);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_RPAREN);
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
      if (lookahead == 'a') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(294);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == 'a') ADVANCE(292);
      if (lookahead == 'i') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(294);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == 'g') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(294);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == 'm') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(294);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == 'n') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(294);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == 'n') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(294);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == 'o') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(294);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == 's') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(294);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == 't') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(294);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == 't') ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(294);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == 'u') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(294);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == 'u') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(294);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == 'v') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(294);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_field_name);
      if (lookahead == 'x') ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(294);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_field_name);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(294);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_field_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(294);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_field_property);
      if (lookahead == 'a') ADVANCE(302);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_field_property);
      if (lookahead == 'a') ADVANCE(308);
      if (lookahead == 'i') ADVANCE(299);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_field_property);
      if (lookahead == 'g') ADVANCE(419);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_field_property);
      if (lookahead == 'm') ADVANCE(422);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_field_property);
      if (lookahead == 'n') ADVANCE(382);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_field_property);
      if (lookahead == 'n') ADVANCE(304);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_field_property);
      if (lookahead == 'o') ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_field_property);
      if (lookahead == 's') ADVANCE(303);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_field_property);
      if (lookahead == 't') ADVANCE(428);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_field_property);
      if (lookahead == 't') ADVANCE(416);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_field_property);
      if (lookahead == 'u') ADVANCE(298);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_field_property);
      if (lookahead == 'u') ADVANCE(300);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_field_property);
      if (lookahead == 'v') ADVANCE(297);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_field_property);
      if (lookahead == 'x') ADVANCE(425);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_field_property);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_asc);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_desc);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(315);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(315);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(318);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(318);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_int_token1);
      if (lookahead == '.') ADVANCE(208);
      if (lookahead == ':') ADVANCE(249);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(321);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_int_token1);
      if (lookahead == '.') ADVANCE(208);
      if (lookahead == ':') ADVANCE(249);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(325);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_int_token1);
      if (lookahead == '.') ADVANCE(208);
      if (lookahead == ':') ADVANCE(249);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(320);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_int_token1);
      if (lookahead == '.') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(326);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_int_token1);
      if (lookahead == '.') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(322);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_int_token1);
      if (lookahead == '.') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(323);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_int_token1);
      if (lookahead == '.') ADVANCE(210);
      if (lookahead == ':') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(326);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_int_token1);
      if (lookahead == '.') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(326);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_int_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(327);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '.') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '.') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(328);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '.') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(329);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_true);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_false);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_date_token1);
      if (lookahead == ' ') ADVANCE(31);
      if (lookahead == ',') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(33);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_date_token1);
      if (lookahead == ' ') ADVANCE(31);
      if (lookahead == ',') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(338);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(33);
      END_STATE();
    case 338:
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
    case 339:
      ACCEPT_TOKEN(aux_sym_date_token1);
      if (lookahead == ' ') ADVANCE(51);
      if (lookahead == ',') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(49);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_date_token1);
      if (lookahead == ' ') ADVANCE(244);
      if (lookahead == ',') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(343);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_date_token1);
      if (lookahead == ',') ADVANCE(45);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_date_token1);
      if (lookahead == ',') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(341);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_date_token1);
      if (lookahead == ',') ADVANCE(47);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_date_token1);
      if (lookahead == ',') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(345);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_date_token1);
      if (lookahead == ',') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(220);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_date_token1);
      if (lookahead == ',') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(343);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_date_token2);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_date_token2);
      if (lookahead == ' ') ADVANCE(245);
      if (lookahead == ',') ADVANCE(52);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_date_time_token1);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_date_time_token2);
      if (lookahead == ' ') ADVANCE(230);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_date_time_token3);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_date_time_token4);
      if (lookahead == ':') ADVANCE(238);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_date_time_token5);
      if (lookahead == ' ') ADVANCE(203);
      if (lookahead == ':') ADVANCE(240);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_date_time_token6);
      if (lookahead == ' ') ADVANCE(204);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_date_time_token7);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_date_time_token8);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_date_time_token9);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_date_time_token10);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 'a') ADVANCE(360);
      if (('b' <= lookahead && lookahead <= 'f')) ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == ':') ADVANCE(249);
      if (lookahead == 'l') ADVANCE(368);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == ':') ADVANCE(249);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == ':') ADVANCE(249);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == ':') ADVANCE(249);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == ':') ADVANCE(249);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == 'e') ADVANCE(333);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == 'e') ADVANCE(335);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == 'r') ADVANCE(369);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == 's') ADVANCE(366);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_enum);
      if (lookahead == 'u') ADVANCE(365);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_enum);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_enum);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(371);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_B);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_KB);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_MB);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_GB);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_TB);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_ms);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_s);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_s);
      if (lookahead == 'u') ADVANCE(151);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_min);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_min);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(294);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_min);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_h);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_d);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_d);
      if (lookahead == 'e') ADVANCE(184);
      if (lookahead == 'u') ADVANCE(178);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(aux_sym_ip_address_token1);
      if (lookahead == '/') ADVANCE(212);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(aux_sym_ip_address_token1);
      if (lookahead == '/') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(386);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(aux_sym_ip_address_token1);
      if (lookahead == '/') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(387);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_ip_address_token2);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(aux_sym_ip_address_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(389);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(aux_sym_ip_address_token3);
      if (lookahead == ':') ADVANCE(70);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(aux_sym_ip_address_token3);
      if (lookahead == ':') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(391);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_ip_address_token3);
      if (lookahead == ':') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(392);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(aux_sym_ip_address_token3);
      if (lookahead == ':') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(393);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(aux_sym_ip_address_token4);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(aux_sym_ip_address_token4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(395);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_version);
      if (lookahead == '.') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(397);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(404);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_pipe);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_addition);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_subtraction);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_division);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_multiplication);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_not_equals);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_greater_than);
      if (lookahead == '=') ADVANCE(407);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_greater_than_or_equals);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_less_than);
      if (lookahead == '=') ADVANCE(409);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_less_than_or_equals);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_in_array);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_not_in_array);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_and);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_or);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_count);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_count);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(294);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_count);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_avg);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_avg);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(294);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_avg);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_sum);
      if (lookahead == 'm') ADVANCE(121);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_sum);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(294);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_sum);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_max);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_max);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(294);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_max);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_last);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_last);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(294);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(293);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_last);
      if (('A' <= lookahead && lookahead <= 'z')) ADVANCE(309);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_LPAREN_RPAREN);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_by);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 56},
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
  [30] = {.lex_state = 256},
  [31] = {.lex_state = 256},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 257},
  [34] = {.lex_state = 53},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 257},
  [37] = {.lex_state = 53},
  [38] = {.lex_state = 256},
  [39] = {.lex_state = 256},
  [40] = {.lex_state = 256},
  [41] = {.lex_state = 119},
  [42] = {.lex_state = 256},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 256},
  [45] = {.lex_state = 257},
  [46] = {.lex_state = 119},
  [47] = {.lex_state = 256},
  [48] = {.lex_state = 119},
  [49] = {.lex_state = 119},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 119},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 119},
  [54] = {.lex_state = 256},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 57},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 256},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 256},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 256},
  [64] = {.lex_state = 256},
  [65] = {.lex_state = 256},
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
  [84] = {.lex_state = 256},
  [85] = {.lex_state = 256},
  [86] = {.lex_state = 256},
  [87] = {.lex_state = 256},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 256},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 256},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 257},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 256},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 6},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 6},
  [114] = {.lex_state = 7},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 58},
  [124] = {.lex_state = 58},
  [125] = {.lex_state = 7},
  [126] = {.lex_state = 6},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 256},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 58},
  [133] = {.lex_state = 7},
  [134] = {.lex_state = 7},
  [135] = {.lex_state = 6},
  [136] = {.lex_state = 7},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 6},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 58},
  [142] = {.lex_state = 58},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 58},
  [148] = {.lex_state = 58},
  [149] = {.lex_state = 11},
  [150] = {.lex_state = 11},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
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
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 58},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 56},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 58},
  [183] = {.lex_state = 58},
  [184] = {.lex_state = 56},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 58},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 58},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 206},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 58},
  [202] = {.lex_state = 58},
  [203] = {.lex_state = 58},
  [204] = {.lex_state = 58},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 58},
  [207] = {.lex_state = 206},
  [208] = {.lex_state = 56},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
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
    [sym_source_file] = STATE(210),
    [sym_query] = STATE(209),
    [sym_table] = STATE(84),
    [sym_select_clause] = STATE(115),
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
    STATE(108), 1,
      sym_expression,
    STATE(208), 1,
      sym_aggregate_field,
    ACTIONS(15), 5,
      sym_count,
      sym_avg,
      sym_sum,
      sym_max,
      sym_last,
    STATE(72), 8,
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
    STATE(82), 1,
      sym_expression,
    STATE(208), 1,
      sym_aggregate_field,
    ACTIONS(15), 5,
      sym_count,
      sym_avg,
      sym_sum,
      sym_max,
      sym_last,
    STATE(72), 8,
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
    STATE(73), 1,
      sym_expression,
    STATE(208), 1,
      sym_aggregate_field,
    ACTIONS(15), 5,
      sym_count,
      sym_avg,
      sym_sum,
      sym_max,
      sym_last,
    STATE(72), 8,
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
    STATE(80), 1,
      sym_expression,
    STATE(208), 1,
      sym_aggregate_field,
    ACTIONS(15), 5,
      sym_count,
      sym_avg,
      sym_sum,
      sym_max,
      sym_last,
    STATE(72), 8,
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
    STATE(99), 1,
      sym_expression,
    STATE(208), 1,
      sym_aggregate_field,
    ACTIONS(15), 5,
      sym_count,
      sym_avg,
      sym_sum,
      sym_max,
      sym_last,
    STATE(72), 8,
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
    STATE(75), 1,
      sym_expression,
    STATE(208), 1,
      sym_aggregate_field,
    ACTIONS(15), 5,
      sym_count,
      sym_avg,
      sym_sum,
      sym_max,
      sym_last,
    STATE(72), 8,
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
    STATE(83), 1,
      sym_expression,
    STATE(208), 1,
      sym_aggregate_field,
    ACTIONS(15), 5,
      sym_count,
      sym_avg,
      sym_sum,
      sym_max,
      sym_last,
    STATE(72), 8,
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
    STATE(81), 1,
      sym_expression,
    STATE(208), 1,
      sym_aggregate_field,
    ACTIONS(15), 5,
      sym_count,
      sym_avg,
      sym_sum,
      sym_max,
      sym_last,
    STATE(72), 8,
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
    STATE(75), 1,
      sym_expression,
    STATE(208), 1,
      sym_aggregate_field,
    ACTIONS(15), 5,
      sym_count,
      sym_avg,
      sym_sum,
      sym_max,
      sym_last,
    STATE(72), 8,
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
    STATE(74), 1,
      sym_expression,
    STATE(208), 1,
      sym_aggregate_field,
    ACTIONS(15), 5,
      sym_count,
      sym_avg,
      sym_sum,
      sym_max,
      sym_last,
    STATE(72), 8,
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
    STATE(74), 1,
      sym_expression,
    STATE(208), 1,
      sym_aggregate_field,
    ACTIONS(15), 5,
      sym_count,
      sym_avg,
      sym_sum,
      sym_max,
      sym_last,
    STATE(72), 8,
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
    STATE(105), 1,
      sym_expression,
    STATE(208), 1,
      sym_aggregate_field,
    ACTIONS(15), 5,
      sym_count,
      sym_avg,
      sym_sum,
      sym_max,
      sym_last,
    STATE(72), 8,
      sym_expression_addition,
      sym_expression_subtraction,
      sym_expression_multiplication,
      sym_expression_division,
      sym_expression_parenthesized_expression,
      sym_field,
      sym_int,
      sym_aggregate_function,
  [504] = 10,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      aux_sym_int_token1,
    ACTIONS(33), 1,
      sym_version,
    STATE(29), 1,
      aux_sym_where_clause_repeat1,
    ACTIONS(25), 2,
      sym_float,
      sym_enum,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      aux_sym_ip_address_token2,
      aux_sym_ip_address_token4,
    ACTIONS(29), 3,
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
  [545] = 10,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      aux_sym_int_token1,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      sym_version,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      aux_sym_ip_address_token2,
      aux_sym_ip_address_token4,
    ACTIONS(37), 2,
      sym_float,
      sym_enum,
    ACTIONS(29), 3,
      aux_sym_ip_address_token1,
      aux_sym_ip_address_token3,
      aux_sym_ip_address_token5,
    STATE(151), 6,
      sym_string,
      sym_int,
      sym_boolean,
      sym_byte,
      sym_duration,
      sym_ip_address,
  [586] = 10,
    ACTIONS(41), 1,
      anon_sym_LBRACK,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_SQUOTE,
    ACTIONS(47), 1,
      aux_sym_int_token1,
    ACTIONS(57), 1,
      sym_version,
    ACTIONS(49), 2,
      sym_float,
      sym_enum,
    ACTIONS(51), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(55), 2,
      aux_sym_ip_address_token2,
      aux_sym_ip_address_token4,
    ACTIONS(53), 3,
      aux_sym_ip_address_token1,
      aux_sym_ip_address_token3,
      aux_sym_ip_address_token5,
    STATE(117), 6,
      sym_string,
      sym_int,
      sym_boolean,
      sym_byte,
      sym_duration,
      sym_ip_address,
  [627] = 10,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      aux_sym_int_token1,
    ACTIONS(61), 1,
      sym_version,
    STATE(24), 1,
      aux_sym_where_clause_repeat1,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      aux_sym_ip_address_token2,
      aux_sym_ip_address_token4,
    ACTIONS(59), 2,
      sym_float,
      sym_enum,
    ACTIONS(29), 3,
      aux_sym_ip_address_token1,
      aux_sym_ip_address_token3,
      aux_sym_ip_address_token5,
    STATE(185), 6,
      sym_string,
      sym_int,
      sym_boolean,
      sym_byte,
      sym_duration,
      sym_ip_address,
  [668] = 10,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_SQUOTE,
    ACTIONS(47), 1,
      aux_sym_int_token1,
    ACTIONS(63), 1,
      anon_sym_LBRACK,
    ACTIONS(67), 1,
      sym_version,
    ACTIONS(51), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(55), 2,
      aux_sym_ip_address_token2,
      aux_sym_ip_address_token4,
    ACTIONS(65), 2,
      sym_float,
      sym_enum,
    ACTIONS(53), 3,
      aux_sym_ip_address_token1,
      aux_sym_ip_address_token3,
      aux_sym_ip_address_token5,
    STATE(127), 6,
      sym_string,
      sym_int,
      sym_boolean,
      sym_byte,
      sym_duration,
      sym_ip_address,
  [709] = 10,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      aux_sym_int_token1,
    ACTIONS(71), 1,
      sym_version,
    STATE(25), 1,
      aux_sym_where_clause_repeat1,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      aux_sym_ip_address_token2,
      aux_sym_ip_address_token4,
    ACTIONS(69), 2,
      sym_float,
      sym_enum,
    ACTIONS(29), 3,
      aux_sym_ip_address_token1,
      aux_sym_ip_address_token3,
      aux_sym_ip_address_token5,
    STATE(179), 6,
      sym_string,
      sym_int,
      sym_boolean,
      sym_byte,
      sym_duration,
      sym_ip_address,
  [750] = 10,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      aux_sym_int_token1,
    ACTIONS(73), 1,
      anon_sym_LBRACK,
    ACTIONS(77), 1,
      sym_version,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      aux_sym_ip_address_token2,
      aux_sym_ip_address_token4,
    ACTIONS(75), 2,
      sym_float,
      sym_enum,
    ACTIONS(29), 3,
      aux_sym_ip_address_token1,
      aux_sym_ip_address_token3,
      aux_sym_ip_address_token5,
    STATE(168), 6,
      sym_string,
      sym_int,
      sym_boolean,
      sym_byte,
      sym_duration,
      sym_ip_address,
  [791] = 10,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      aux_sym_int_token1,
    ACTIONS(81), 1,
      sym_version,
    STATE(22), 1,
      aux_sym_where_clause_repeat1,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      aux_sym_ip_address_token2,
      aux_sym_ip_address_token4,
    ACTIONS(79), 2,
      sym_float,
      sym_enum,
    ACTIONS(29), 3,
      aux_sym_ip_address_token1,
      aux_sym_ip_address_token3,
      aux_sym_ip_address_token5,
    STATE(153), 6,
      sym_string,
      sym_int,
      sym_boolean,
      sym_byte,
      sym_duration,
      sym_ip_address,
  [832] = 10,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      aux_sym_int_token1,
    ACTIONS(85), 1,
      sym_version,
    STATE(24), 1,
      aux_sym_where_clause_repeat1,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      aux_sym_ip_address_token2,
      aux_sym_ip_address_token4,
    ACTIONS(83), 2,
      sym_float,
      sym_enum,
    ACTIONS(29), 3,
      aux_sym_ip_address_token1,
      aux_sym_ip_address_token3,
      aux_sym_ip_address_token5,
    STATE(161), 6,
      sym_string,
      sym_int,
      sym_boolean,
      sym_byte,
      sym_duration,
      sym_ip_address,
  [873] = 10,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      aux_sym_int_token1,
    ACTIONS(89), 1,
      sym_version,
    STATE(27), 1,
      aux_sym_where_clause_repeat1,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      aux_sym_ip_address_token2,
      aux_sym_ip_address_token4,
    ACTIONS(87), 2,
      sym_float,
      sym_enum,
    ACTIONS(29), 3,
      aux_sym_ip_address_token1,
      aux_sym_ip_address_token3,
      aux_sym_ip_address_token5,
    STATE(152), 6,
      sym_string,
      sym_int,
      sym_boolean,
      sym_byte,
      sym_duration,
      sym_ip_address,
  [914] = 10,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    ACTIONS(94), 1,
      anon_sym_SQUOTE,
    ACTIONS(97), 1,
      aux_sym_int_token1,
    ACTIONS(112), 1,
      sym_version,
    STATE(24), 1,
      aux_sym_where_clause_repeat1,
    ACTIONS(100), 2,
      sym_float,
      sym_enum,
    ACTIONS(103), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(109), 2,
      aux_sym_ip_address_token2,
      aux_sym_ip_address_token4,
    ACTIONS(106), 3,
      aux_sym_ip_address_token1,
      aux_sym_ip_address_token3,
      aux_sym_ip_address_token5,
    STATE(205), 6,
      sym_string,
      sym_int,
      sym_boolean,
      sym_byte,
      sym_duration,
      sym_ip_address,
  [955] = 10,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      aux_sym_int_token1,
    ACTIONS(117), 1,
      sym_version,
    STATE(24), 1,
      aux_sym_where_clause_repeat1,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      aux_sym_ip_address_token2,
      aux_sym_ip_address_token4,
    ACTIONS(115), 2,
      sym_float,
      sym_enum,
    ACTIONS(29), 3,
      aux_sym_ip_address_token1,
      aux_sym_ip_address_token3,
      aux_sym_ip_address_token5,
    STATE(154), 6,
      sym_string,
      sym_int,
      sym_boolean,
      sym_byte,
      sym_duration,
      sym_ip_address,
  [996] = 10,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      aux_sym_int_token1,
    ACTIONS(121), 1,
      sym_version,
    STATE(17), 1,
      aux_sym_where_clause_repeat1,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      aux_sym_ip_address_token2,
      aux_sym_ip_address_token4,
    ACTIONS(119), 2,
      sym_float,
      sym_enum,
    ACTIONS(29), 3,
      aux_sym_ip_address_token1,
      aux_sym_ip_address_token3,
      aux_sym_ip_address_token5,
    STATE(156), 6,
      sym_string,
      sym_int,
      sym_boolean,
      sym_byte,
      sym_duration,
      sym_ip_address,
  [1037] = 10,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      aux_sym_int_token1,
    ACTIONS(125), 1,
      sym_version,
    STATE(24), 1,
      aux_sym_where_clause_repeat1,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      aux_sym_ip_address_token2,
      aux_sym_ip_address_token4,
    ACTIONS(123), 2,
      sym_float,
      sym_enum,
    ACTIONS(29), 3,
      aux_sym_ip_address_token1,
      aux_sym_ip_address_token3,
      aux_sym_ip_address_token5,
    STATE(162), 6,
      sym_string,
      sym_int,
      sym_boolean,
      sym_byte,
      sym_duration,
      sym_ip_address,
  [1078] = 10,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      aux_sym_int_token1,
    ACTIONS(127), 1,
      anon_sym_LBRACK,
    ACTIONS(131), 1,
      sym_version,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      aux_sym_ip_address_token2,
      aux_sym_ip_address_token4,
    ACTIONS(129), 2,
      sym_float,
      sym_enum,
    ACTIONS(29), 3,
      aux_sym_ip_address_token1,
      aux_sym_ip_address_token3,
      aux_sym_ip_address_token5,
    STATE(143), 6,
      sym_string,
      sym_int,
      sym_boolean,
      sym_byte,
      sym_duration,
      sym_ip_address,
  [1119] = 10,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_SQUOTE,
    ACTIONS(23), 1,
      aux_sym_int_token1,
    ACTIONS(135), 1,
      sym_version,
    STATE(24), 1,
      aux_sym_where_clause_repeat1,
    ACTIONS(27), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(31), 2,
      aux_sym_ip_address_token2,
      aux_sym_ip_address_token4,
    ACTIONS(133), 2,
      sym_float,
      sym_enum,
    ACTIONS(29), 3,
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
  [1160] = 4,
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
  [1188] = 2,
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
  [1211] = 9,
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
    STATE(175), 8,
      sym_include_clause,
      sym_list_clause,
      sym_sort_clause,
      sym_summarize_clause,
      sym_compute_clause,
      sym_where_clause,
      sym_with_clause,
      sym_limit_clause,
  [1246] = 3,
    ACTIONS(160), 5,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
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
  [1268] = 2,
    ACTIONS(166), 6,
      anon_sym_LBRACK,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      aux_sym_ip_address_token2,
      aux_sym_ip_address_token4,
      sym_version,
    ACTIONS(168), 8,
      aux_sym_int_token1,
      sym_float,
      anon_sym_true,
      anon_sym_false,
      sym_enum,
      aux_sym_ip_address_token1,
      aux_sym_ip_address_token3,
      aux_sym_ip_address_token5,
  [1287] = 5,
    STATE(199), 1,
      sym_date,
    STATE(200), 1,
      sym_date_time,
    ACTIONS(170), 2,
      aux_sym_date_token1,
      aux_sym_date_token2,
    ACTIONS(174), 4,
      aux_sym_date_time_token2,
      aux_sym_date_time_token4,
      aux_sym_date_time_token5,
      aux_sym_date_time_token6,
    ACTIONS(172), 6,
      aux_sym_date_time_token1,
      aux_sym_date_time_token3,
      aux_sym_date_time_token7,
      aux_sym_date_time_token8,
      aux_sym_date_time_token9,
      aux_sym_date_time_token10,
  [1312] = 3,
    ACTIONS(160), 4,
      ts_builtin_sym_end,
      sym_pipe,
      sym_and,
      sym_or,
    ACTIONS(176), 5,
      anon_sym_B,
      anon_sym_KB,
      anon_sym_MB,
      anon_sym_GB,
      anon_sym_TB,
    ACTIONS(178), 5,
      anon_sym_ms,
      anon_sym_s,
      anon_sym_min,
      anon_sym_h,
      anon_sym_d,
  [1333] = 2,
    ACTIONS(180), 5,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      aux_sym_ip_address_token2,
      aux_sym_ip_address_token4,
      sym_version,
    ACTIONS(182), 8,
      aux_sym_int_token1,
      sym_float,
      anon_sym_true,
      anon_sym_false,
      sym_enum,
      aux_sym_ip_address_token1,
      aux_sym_ip_address_token3,
      aux_sym_ip_address_token5,
  [1351] = 1,
    ACTIONS(184), 12,
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
  [1366] = 1,
    ACTIONS(186), 12,
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
  [1381] = 2,
    ACTIONS(190), 1,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(188), 11,
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
  [1398] = 7,
    ACTIONS(192), 1,
      sym_field_property,
    ACTIONS(194), 1,
      anon_sym_min,
    STATE(61), 1,
      sym_aggregate_field,
    STATE(63), 1,
      sym_min,
    STATE(77), 1,
      sym_aggregate_function,
    STATE(79), 1,
      sym_aggregate,
    ACTIONS(196), 5,
      sym_count,
      sym_avg,
      sym_sum,
      sym_max,
      sym_last,
  [1424] = 1,
    ACTIONS(188), 11,
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
  [1438] = 3,
    STATE(194), 1,
      sym_date_time,
    ACTIONS(200), 4,
      aux_sym_date_time_token2,
      aux_sym_date_time_token4,
      aux_sym_date_time_token5,
      aux_sym_date_time_token6,
    ACTIONS(198), 6,
      aux_sym_date_time_token1,
      aux_sym_date_time_token3,
      aux_sym_date_time_token7,
      aux_sym_date_time_token8,
      aux_sym_date_time_token9,
      aux_sym_date_time_token10,
  [1456] = 1,
    ACTIONS(202), 11,
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
  [1470] = 3,
    ACTIONS(160), 1,
      anon_sym_COMMA,
    ACTIONS(176), 5,
      anon_sym_B,
      anon_sym_KB,
      anon_sym_MB,
      anon_sym_GB,
      anon_sym_TB,
    ACTIONS(178), 5,
      anon_sym_ms,
      anon_sym_s,
      anon_sym_min,
      anon_sym_h,
      anon_sym_d,
  [1488] = 7,
    ACTIONS(13), 1,
      anon_sym_min,
    ACTIONS(204), 1,
      sym_field_property,
    STATE(38), 1,
      sym_min,
    STATE(40), 1,
      sym_aggregate_field,
    STATE(42), 1,
      sym_aggregate_function,
    STATE(44), 1,
      sym_aggregate,
    ACTIONS(15), 5,
      sym_count,
      sym_avg,
      sym_sum,
      sym_max,
      sym_last,
  [1514] = 1,
    ACTIONS(206), 11,
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
  [1528] = 7,
    ACTIONS(13), 1,
      anon_sym_min,
    ACTIONS(192), 1,
      sym_field_property,
    STATE(38), 1,
      sym_min,
    STATE(40), 1,
      sym_aggregate_field,
    STATE(42), 1,
      sym_aggregate_function,
    STATE(47), 1,
      sym_aggregate,
    ACTIONS(15), 5,
      sym_count,
      sym_avg,
      sym_sum,
      sym_max,
      sym_last,
  [1554] = 7,
    ACTIONS(13), 1,
      anon_sym_min,
    ACTIONS(192), 1,
      sym_field_property,
    STATE(38), 1,
      sym_min,
    STATE(40), 1,
      sym_aggregate_field,
    STATE(42), 1,
      sym_aggregate_function,
    STATE(44), 1,
      sym_aggregate,
    ACTIONS(15), 5,
      sym_count,
      sym_avg,
      sym_sum,
      sym_max,
      sym_last,
  [1580] = 4,
    ACTIONS(208), 1,
      anon_sym_DOT,
    STATE(30), 1,
      aux_sym_field_repeat1,
    ACTIONS(210), 3,
      anon_sym_EQ,
      sym_greater_than,
      sym_less_than,
    ACTIONS(212), 6,
      anon_sym_EQ_EQ,
      sym_not_equals,
      sym_greater_than_or_equals,
      sym_less_than_or_equals,
      sym_in_array,
      sym_not_in_array,
  [1600] = 7,
    ACTIONS(192), 1,
      sym_field_property,
    ACTIONS(194), 1,
      anon_sym_min,
    STATE(61), 1,
      sym_aggregate_field,
    STATE(63), 1,
      sym_min,
    STATE(69), 1,
      sym_aggregate,
    STATE(77), 1,
      sym_aggregate_function,
    ACTIONS(196), 5,
      sym_count,
      sym_avg,
      sym_sum,
      sym_max,
      sym_last,
  [1626] = 4,
    ACTIONS(214), 1,
      anon_sym_DOT,
    STATE(50), 1,
      aux_sym_field_repeat1,
    ACTIONS(216), 3,
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
  [1646] = 7,
    ACTIONS(13), 1,
      anon_sym_min,
    ACTIONS(204), 1,
      sym_field_property,
    STATE(38), 1,
      sym_min,
    STATE(40), 1,
      sym_aggregate_field,
    STATE(42), 1,
      sym_aggregate_function,
    STATE(47), 1,
      sym_aggregate,
    ACTIONS(15), 5,
      sym_count,
      sym_avg,
      sym_sum,
      sym_max,
      sym_last,
  [1672] = 1,
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
  [1686] = 5,
    ACTIONS(222), 1,
      anon_sym_EQ,
    ACTIONS(224), 1,
      anon_sym_EQ_EQ,
    STATE(18), 1,
      sym_equals,
    ACTIONS(228), 2,
      sym_greater_than,
      sym_less_than,
    ACTIONS(226), 5,
      sym_not_equals,
      sym_greater_than_or_equals,
      sym_less_than_or_equals,
      sym_in_array,
      sym_not_in_array,
  [1707] = 2,
    ACTIONS(230), 2,
      anon_sym_LPAREN,
      sym_float,
    ACTIONS(232), 8,
      sym_field_name,
      aux_sym_int_token1,
      anon_sym_min,
      sym_count,
      sym_avg,
      sym_sum,
      sym_max,
      sym_last,
  [1722] = 5,
    ACTIONS(222), 1,
      anon_sym_EQ,
    ACTIONS(224), 1,
      anon_sym_EQ_EQ,
    STATE(16), 1,
      sym_equals,
    ACTIONS(236), 2,
      sym_greater_than,
      sym_less_than,
    ACTIONS(234), 5,
      sym_not_equals,
      sym_greater_than_or_equals,
      sym_less_than_or_equals,
      sym_in_array,
      sym_not_in_array,
  [1743] = 5,
    ACTIONS(222), 1,
      anon_sym_EQ,
    ACTIONS(224), 1,
      anon_sym_EQ_EQ,
    STATE(15), 1,
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
  [1764] = 3,
    ACTIONS(242), 1,
      anon_sym_DOT,
    STATE(30), 1,
      aux_sym_field_repeat1,
    ACTIONS(212), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_asc,
      anon_sym_desc,
      sym_addition,
      sym_subtraction,
      sym_division,
      sym_multiplication,
  [1781] = 3,
    ACTIONS(244), 1,
      anon_sym_DOT,
    STATE(66), 1,
      aux_sym_field_repeat1,
    ACTIONS(212), 8,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_pipe,
      sym_addition,
      sym_subtraction,
      sym_division,
      sym_multiplication,
      sym_by,
  [1798] = 3,
    ACTIONS(248), 1,
      anon_sym_LPAREN_RPAREN,
    ACTIONS(246), 3,
      anon_sym_EQ,
      sym_greater_than,
      sym_less_than,
    ACTIONS(188), 6,
      anon_sym_EQ_EQ,
      sym_not_equals,
      sym_greater_than_or_equals,
      sym_less_than_or_equals,
      sym_in_array,
      sym_not_in_array,
  [1815] = 5,
    ACTIONS(222), 1,
      anon_sym_EQ,
    ACTIONS(224), 1,
      anon_sym_EQ_EQ,
    STATE(28), 1,
      sym_equals,
    ACTIONS(252), 2,
      sym_greater_than,
      sym_less_than,
    ACTIONS(250), 5,
      sym_not_equals,
      sym_greater_than_or_equals,
      sym_less_than_or_equals,
      sym_in_array,
      sym_not_in_array,
  [1836] = 2,
    ACTIONS(254), 3,
      anon_sym_EQ,
      sym_greater_than,
      sym_less_than,
    ACTIONS(184), 7,
      anon_sym_EQ_EQ,
      sym_not_equals,
      sym_greater_than_or_equals,
      sym_less_than_or_equals,
      sym_in_array,
      sym_not_in_array,
      anon_sym_LPAREN_RPAREN,
  [1851] = 3,
    ACTIONS(256), 1,
      anon_sym_DOT,
    STATE(59), 1,
      aux_sym_field_repeat1,
    ACTIONS(218), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_asc,
      anon_sym_desc,
      sym_addition,
      sym_subtraction,
      sym_division,
      sym_multiplication,
  [1868] = 2,
    ACTIONS(258), 3,
      anon_sym_EQ,
      sym_greater_than,
      sym_less_than,
    ACTIONS(186), 7,
      anon_sym_EQ_EQ,
      sym_not_equals,
      sym_greater_than_or_equals,
      sym_less_than_or_equals,
      sym_in_array,
      sym_not_in_array,
      anon_sym_LPAREN_RPAREN,
  [1883] = 3,
    ACTIONS(260), 1,
      anon_sym_DOT,
    STATE(66), 1,
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
  [1900] = 5,
    ACTIONS(222), 1,
      anon_sym_EQ,
    ACTIONS(224), 1,
      anon_sym_EQ_EQ,
    STATE(20), 1,
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
  [1921] = 3,
    ACTIONS(267), 1,
      anon_sym_DOT,
    STATE(60), 1,
      aux_sym_field_repeat1,
    ACTIONS(218), 8,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_pipe,
      sym_addition,
      sym_subtraction,
      sym_division,
      sym_multiplication,
      sym_by,
  [1938] = 2,
    ACTIONS(269), 3,
      anon_sym_EQ,
      sym_greater_than,
      sym_less_than,
    ACTIONS(202), 6,
      anon_sym_EQ_EQ,
      sym_not_equals,
      sym_greater_than_or_equals,
      sym_less_than_or_equals,
      sym_in_array,
      sym_not_in_array,
  [1952] = 1,
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
  [1964] = 1,
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
  [1976] = 1,
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
  [1988] = 8,
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
    STATE(102), 1,
      aux_sym_summarize_clause_repeat1,
    ACTIONS(275), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [2014] = 1,
    ACTIONS(289), 9,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_pipe,
      sym_addition,
      sym_subtraction,
      sym_division,
      sym_multiplication,
      sym_by,
  [2026] = 1,
    ACTIONS(291), 9,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_pipe,
      sym_addition,
      sym_subtraction,
      sym_division,
      sym_multiplication,
      sym_by,
  [2038] = 1,
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
  [2050] = 2,
    ACTIONS(246), 3,
      anon_sym_EQ,
      sym_greater_than,
      sym_less_than,
    ACTIONS(188), 6,
      anon_sym_EQ_EQ,
      sym_not_equals,
      sym_greater_than_or_equals,
      sym_less_than_or_equals,
      sym_in_array,
      sym_not_in_array,
  [2064] = 2,
    ACTIONS(293), 3,
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
  [2078] = 2,
    ACTIONS(295), 3,
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
  [2092] = 3,
    ACTIONS(283), 1,
      sym_division,
    ACTIONS(285), 1,
      sym_multiplication,
    ACTIONS(297), 6,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_pipe,
      sym_addition,
      sym_subtraction,
      sym_by,
  [2107] = 3,
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
  [2122] = 7,
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
    STATE(139), 1,
      aux_sym_summarize_clause_repeat1,
    ACTIONS(301), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [2145] = 5,
    ACTIONS(279), 1,
      sym_addition,
    ACTIONS(281), 1,
      sym_subtraction,
    ACTIONS(283), 1,
      sym_division,
    ACTIONS(285), 1,
      sym_multiplication,
    ACTIONS(303), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_pipe,
      sym_by,
  [2164] = 5,
    ACTIONS(307), 1,
      anon_sym_duringpast,
    ACTIONS(309), 1,
      anon_sym_from,
    ACTIONS(311), 1,
      anon_sym_on,
    STATE(181), 1,
      sym_time_frame,
    ACTIONS(305), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [2181] = 5,
    ACTIONS(307), 1,
      anon_sym_duringpast,
    ACTIONS(309), 1,
      anon_sym_from,
    ACTIONS(311), 1,
      anon_sym_on,
    STATE(160), 1,
      sym_time_frame,
    ACTIONS(313), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [2198] = 5,
    ACTIONS(307), 1,
      anon_sym_duringpast,
    ACTIONS(309), 1,
      anon_sym_from,
    ACTIONS(311), 1,
      anon_sym_on,
    STATE(191), 1,
      sym_time_frame,
    ACTIONS(315), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [2215] = 4,
    ACTIONS(317), 1,
      anon_sym_COMMA,
    STATE(128), 1,
      aux_sym_list_clause_repeat1,
    STATE(157), 1,
      sym_sort_order,
    ACTIONS(319), 2,
      anon_sym_asc,
      anon_sym_desc,
  [2229] = 1,
    ACTIONS(321), 5,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      sym_and,
      sym_or,
  [2237] = 1,
    ACTIONS(323), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_asc,
      anon_sym_desc,
      sym_pipe,
  [2245] = 1,
    ACTIONS(325), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_pipe,
      sym_and,
      sym_or,
  [2253] = 4,
    ACTIONS(317), 1,
      anon_sym_COMMA,
    STATE(87), 1,
      aux_sym_list_clause_repeat1,
    STATE(180), 1,
      sym_sort_order,
    ACTIONS(319), 2,
      anon_sym_asc,
      anon_sym_desc,
  [2267] = 1,
    ACTIONS(325), 5,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      sym_and,
      sym_or,
  [2275] = 1,
    ACTIONS(327), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_pipe,
      sym_and,
      sym_or,
  [2283] = 1,
    ACTIONS(329), 5,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      sym_and,
      sym_or,
  [2291] = 1,
    ACTIONS(331), 5,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      sym_and,
      sym_or,
  [2299] = 1,
    ACTIONS(329), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_pipe,
      sym_and,
      sym_or,
  [2307] = 1,
    ACTIONS(331), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_pipe,
      sym_and,
      sym_or,
  [2315] = 1,
    ACTIONS(178), 5,
      anon_sym_ms,
      anon_sym_s,
      anon_sym_min,
      anon_sym_h,
      anon_sym_d,
  [2323] = 5,
    ACTIONS(333), 1,
      anon_sym_RPAREN,
    ACTIONS(335), 1,
      sym_addition,
    ACTIONS(337), 1,
      sym_subtraction,
    ACTIONS(339), 1,
      sym_division,
    ACTIONS(341), 1,
      sym_multiplication,
  [2339] = 3,
    ACTIONS(345), 1,
      anon_sym_COMMA,
    STATE(100), 1,
      aux_sym_summarize_clause_repeat1,
    ACTIONS(343), 3,
      ts_builtin_sym_end,
      sym_pipe,
      sym_by,
  [2351] = 1,
    ACTIONS(348), 5,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      sym_and,
      sym_or,
  [2359] = 4,
    ACTIONS(277), 1,
      anon_sym_COMMA,
    ACTIONS(352), 1,
      sym_by,
    STATE(100), 1,
      aux_sym_summarize_clause_repeat1,
    ACTIONS(350), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [2373] = 1,
    ACTIONS(321), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_pipe,
      sym_and,
      sym_or,
  [2381] = 1,
    ACTIONS(327), 5,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      sym_and,
      sym_or,
  [2389] = 3,
    ACTIONS(339), 1,
      sym_division,
    ACTIONS(341), 1,
      sym_multiplication,
    ACTIONS(297), 3,
      anon_sym_RPAREN,
      sym_addition,
      sym_subtraction,
  [2401] = 1,
    ACTIONS(354), 5,
      ts_builtin_sym_end,
      anon_sym_duringpast,
      anon_sym_from,
      anon_sym_on,
      sym_pipe,
  [2409] = 1,
    ACTIONS(348), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_pipe,
      sym_and,
      sym_or,
  [2417] = 3,
    ACTIONS(339), 1,
      sym_division,
    ACTIONS(341), 1,
      sym_multiplication,
    ACTIONS(299), 3,
      anon_sym_RPAREN,
      sym_addition,
      sym_subtraction,
  [2429] = 4,
    ACTIONS(356), 1,
      anon_sym_DQUOTE,
    ACTIONS(358), 1,
      anon_sym_BSLASH,
    ACTIONS(360), 1,
      aux_sym_string_token2,
    STATE(126), 1,
      aux_sym_string_repeat2,
  [2442] = 2,
    ACTIONS(362), 2,
      ts_builtin_sym_end,
      sym_pipe,
    ACTIONS(364), 2,
      sym_and,
      sym_or,
  [2451] = 2,
    ACTIONS(366), 2,
      ts_builtin_sym_end,
      sym_pipe,
    ACTIONS(368), 2,
      sym_and,
      sym_or,
  [2460] = 2,
    ACTIONS(364), 2,
      sym_and,
      sym_or,
    ACTIONS(366), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [2469] = 4,
    ACTIONS(370), 1,
      anon_sym_DQUOTE,
    ACTIONS(372), 1,
      anon_sym_BSLASH,
    ACTIONS(374), 1,
      aux_sym_string_token2,
    STATE(135), 1,
      aux_sym_string_repeat2,
  [2482] = 4,
    ACTIONS(370), 1,
      anon_sym_SQUOTE,
    ACTIONS(376), 1,
      aux_sym_string_token1,
    ACTIONS(378), 1,
      anon_sym_BSLASH,
    STATE(136), 1,
      aux_sym_string_repeat1,
  [2495] = 3,
    ACTIONS(380), 1,
      ts_builtin_sym_end,
    ACTIONS(382), 1,
      sym_pipe,
    STATE(122), 2,
      sym_clause,
      aux_sym_query_repeat1,
  [2506] = 3,
    ACTIONS(386), 1,
      anon_sym_COMMA,
    STATE(119), 1,
      aux_sym_list_clause_repeat1,
    ACTIONS(384), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [2517] = 2,
    ACTIONS(388), 2,
      ts_builtin_sym_end,
      sym_pipe,
    ACTIONS(390), 2,
      sym_and,
      sym_or,
  [2526] = 3,
    ACTIONS(386), 1,
      anon_sym_COMMA,
    STATE(120), 1,
      aux_sym_list_clause_repeat1,
    ACTIONS(392), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [2537] = 3,
    ACTIONS(386), 1,
      anon_sym_COMMA,
    STATE(120), 1,
      aux_sym_list_clause_repeat1,
    ACTIONS(394), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [2548] = 3,
    ACTIONS(396), 1,
      anon_sym_COMMA,
    STATE(120), 1,
      aux_sym_list_clause_repeat1,
    ACTIONS(323), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [2559] = 3,
    ACTIONS(386), 1,
      anon_sym_COMMA,
    STATE(130), 1,
      aux_sym_list_clause_repeat1,
    ACTIONS(399), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [2570] = 3,
    ACTIONS(382), 1,
      sym_pipe,
    ACTIONS(401), 1,
      ts_builtin_sym_end,
    STATE(137), 2,
      sym_clause,
      aux_sym_query_repeat1,
  [2581] = 4,
    ACTIONS(403), 1,
      sym_field_name,
    ACTIONS(405), 1,
      aux_sym_int_token1,
    STATE(129), 1,
      sym_field,
    STATE(164), 1,
      sym_duration,
  [2594] = 4,
    ACTIONS(403), 1,
      sym_field_name,
    ACTIONS(405), 1,
      aux_sym_int_token1,
    STATE(121), 1,
      sym_field,
    STATE(192), 1,
      sym_duration,
  [2607] = 4,
    ACTIONS(356), 1,
      anon_sym_SQUOTE,
    ACTIONS(407), 1,
      aux_sym_string_token1,
    ACTIONS(409), 1,
      anon_sym_BSLASH,
    STATE(133), 1,
      aux_sym_string_repeat1,
  [2620] = 4,
    ACTIONS(372), 1,
      anon_sym_BSLASH,
    ACTIONS(374), 1,
      aux_sym_string_token2,
    ACTIONS(411), 1,
      anon_sym_DQUOTE,
    STATE(135), 1,
      aux_sym_string_repeat2,
  [2633] = 2,
    ACTIONS(390), 2,
      sym_and,
      sym_or,
    ACTIONS(413), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [2642] = 3,
    ACTIONS(415), 1,
      anon_sym_COMMA,
    STATE(128), 1,
      aux_sym_list_clause_repeat1,
    ACTIONS(323), 2,
      anon_sym_asc,
      anon_sym_desc,
  [2653] = 3,
    ACTIONS(386), 1,
      anon_sym_COMMA,
    STATE(118), 1,
      aux_sym_list_clause_repeat1,
    ACTIONS(418), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [2664] = 3,
    ACTIONS(386), 1,
      anon_sym_COMMA,
    STATE(120), 1,
      aux_sym_list_clause_repeat1,
    ACTIONS(418), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [2675] = 2,
    ACTIONS(368), 2,
      sym_and,
      sym_or,
    ACTIONS(420), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [2684] = 4,
    ACTIONS(422), 1,
      anon_sym_LPAREN,
    ACTIONS(424), 1,
      sym_field_name,
    STATE(55), 1,
      sym_field,
    STATE(142), 1,
      aux_sym_where_clause_repeat2,
  [2697] = 4,
    ACTIONS(376), 1,
      aux_sym_string_token1,
    ACTIONS(378), 1,
      anon_sym_BSLASH,
    ACTIONS(411), 1,
      anon_sym_SQUOTE,
    STATE(136), 1,
      aux_sym_string_repeat1,
  [2710] = 4,
    ACTIONS(426), 1,
      anon_sym_SQUOTE,
    ACTIONS(428), 1,
      aux_sym_string_token1,
    ACTIONS(430), 1,
      anon_sym_BSLASH,
    STATE(114), 1,
      aux_sym_string_repeat1,
  [2723] = 4,
    ACTIONS(432), 1,
      anon_sym_DQUOTE,
    ACTIONS(434), 1,
      anon_sym_BSLASH,
    ACTIONS(437), 1,
      aux_sym_string_token2,
    STATE(135), 1,
      aux_sym_string_repeat2,
  [2736] = 4,
    ACTIONS(440), 1,
      anon_sym_SQUOTE,
    ACTIONS(442), 1,
      aux_sym_string_token1,
    ACTIONS(445), 1,
      anon_sym_BSLASH,
    STATE(136), 1,
      aux_sym_string_repeat1,
  [2749] = 3,
    ACTIONS(448), 1,
      ts_builtin_sym_end,
    ACTIONS(450), 1,
      sym_pipe,
    STATE(137), 2,
      sym_clause,
      aux_sym_query_repeat1,
  [2760] = 4,
    ACTIONS(426), 1,
      anon_sym_DQUOTE,
    ACTIONS(453), 1,
      anon_sym_BSLASH,
    ACTIONS(455), 1,
      aux_sym_string_token2,
    STATE(113), 1,
      aux_sym_string_repeat2,
  [2773] = 3,
    ACTIONS(277), 1,
      anon_sym_COMMA,
    STATE(100), 1,
      aux_sym_summarize_clause_repeat1,
    ACTIONS(457), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [2784] = 2,
    ACTIONS(459), 1,
      anon_sym_RPAREN,
    ACTIONS(364), 2,
      sym_and,
      sym_or,
  [2792] = 3,
    ACTIONS(424), 1,
      sym_field_name,
    STATE(58), 1,
      sym_field,
    STATE(147), 1,
      aux_sym_where_clause_repeat2,
  [2802] = 3,
    ACTIONS(424), 1,
      sym_field_name,
    STATE(57), 1,
      sym_field,
    STATE(148), 1,
      aux_sym_where_clause_repeat2,
  [2812] = 2,
    ACTIONS(461), 1,
      anon_sym_RPAREN,
    ACTIONS(390), 2,
      sym_and,
      sym_or,
  [2820] = 2,
    ACTIONS(463), 1,
      anon_sym_RPAREN,
    ACTIONS(368), 2,
      sym_and,
      sym_or,
  [2828] = 2,
    ACTIONS(465), 1,
      anon_sym_RPAREN,
    ACTIONS(368), 2,
      sym_and,
      sym_or,
  [2836] = 2,
    ACTIONS(463), 1,
      anon_sym_RPAREN,
    ACTIONS(364), 2,
      sym_and,
      sym_or,
  [2844] = 3,
    ACTIONS(424), 1,
      sym_field_name,
    STATE(62), 1,
      sym_field,
    STATE(148), 1,
      aux_sym_where_clause_repeat2,
  [2854] = 3,
    ACTIONS(467), 1,
      sym_field_name,
    STATE(67), 1,
      sym_field,
    STATE(148), 1,
      aux_sym_where_clause_repeat2,
  [2864] = 3,
    ACTIONS(470), 1,
      aux_sym_date_token1,
    ACTIONS(472), 1,
      aux_sym_date_token2,
    STATE(193), 1,
      sym_date,
  [2874] = 3,
    ACTIONS(470), 1,
      aux_sym_date_token1,
    ACTIONS(472), 1,
      aux_sym_date_token2,
    STATE(194), 1,
      sym_date,
  [2884] = 2,
    ACTIONS(474), 1,
      anon_sym_RPAREN,
    ACTIONS(390), 2,
      sym_and,
      sym_or,
  [2892] = 2,
    ACTIONS(476), 1,
      anon_sym_COMMA,
    ACTIONS(478), 1,
      anon_sym_RBRACK,
  [2899] = 2,
    ACTIONS(476), 1,
      anon_sym_COMMA,
    ACTIONS(480), 1,
      anon_sym_RBRACK,
  [2906] = 2,
    ACTIONS(476), 1,
      anon_sym_COMMA,
    ACTIONS(482), 1,
      anon_sym_RBRACK,
  [2913] = 2,
    ACTIONS(476), 1,
      anon_sym_COMMA,
    ACTIONS(484), 1,
      anon_sym_RBRACK,
  [2920] = 2,
    ACTIONS(476), 1,
      anon_sym_COMMA,
    ACTIONS(486), 1,
      anon_sym_RBRACK,
  [2927] = 1,
    ACTIONS(488), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [2932] = 1,
    ACTIONS(366), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [2937] = 1,
    ACTIONS(362), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [2942] = 1,
    ACTIONS(490), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [2947] = 2,
    ACTIONS(476), 1,
      anon_sym_COMMA,
    ACTIONS(492), 1,
      anon_sym_RBRACK,
  [2954] = 2,
    ACTIONS(476), 1,
      anon_sym_COMMA,
    ACTIONS(494), 1,
      anon_sym_RBRACK,
  [2961] = 2,
    ACTIONS(405), 1,
      aux_sym_int_token1,
    STATE(193), 1,
      sym_duration,
  [2968] = 1,
    ACTIONS(418), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [2973] = 1,
    ACTIONS(368), 2,
      sym_and,
      sym_or,
  [2978] = 2,
    ACTIONS(476), 1,
      anon_sym_COMMA,
    ACTIONS(496), 1,
      anon_sym_RBRACK,
  [2985] = 1,
    ACTIONS(498), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [2990] = 1,
    ACTIONS(390), 2,
      sym_and,
      sym_or,
  [2995] = 1,
    ACTIONS(364), 2,
      sym_and,
      sym_or,
  [3000] = 1,
    ACTIONS(500), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [3005] = 1,
    ACTIONS(502), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [3010] = 1,
    ACTIONS(504), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [3015] = 2,
    ACTIONS(506), 1,
      anon_sym_EQ,
    STATE(4), 1,
      sym_alias,
  [3022] = 2,
    ACTIONS(506), 1,
      anon_sym_EQ,
    STATE(3), 1,
      sym_alias,
  [3029] = 1,
    ACTIONS(508), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [3034] = 2,
    ACTIONS(510), 1,
      sym_field_name,
    STATE(89), 1,
      sym_field,
  [3041] = 2,
    ACTIONS(512), 1,
      aux_sym_int_token1,
    STATE(187), 1,
      sym_int,
  [3048] = 2,
    ACTIONS(3), 1,
      aux_sym_table_token1,
    STATE(85), 1,
      sym_table,
  [3055] = 2,
    ACTIONS(476), 1,
      anon_sym_COMMA,
    ACTIONS(514), 1,
      anon_sym_RBRACK,
  [3062] = 1,
    ACTIONS(516), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [3067] = 1,
    ACTIONS(518), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [3072] = 2,
    ACTIONS(510), 1,
      sym_field_name,
    STATE(91), 1,
      sym_field,
  [3079] = 2,
    ACTIONS(403), 1,
      sym_field_name,
    STATE(116), 1,
      sym_field,
  [3086] = 2,
    ACTIONS(3), 1,
      aux_sym_table_token1,
    STATE(86), 1,
      sym_table,
  [3093] = 2,
    ACTIONS(476), 1,
      anon_sym_COMMA,
    ACTIONS(520), 1,
      anon_sym_RBRACK,
  [3100] = 2,
    ACTIONS(506), 1,
      anon_sym_EQ,
    STATE(8), 1,
      sym_alias,
  [3107] = 1,
    ACTIONS(522), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [3112] = 1,
    ACTIONS(420), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [3117] = 1,
    ACTIONS(524), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [3122] = 2,
    ACTIONS(403), 1,
      sym_field_name,
    STATE(89), 1,
      sym_field,
  [3129] = 1,
    ACTIONS(526), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [3134] = 1,
    ACTIONS(399), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [3139] = 1,
    ACTIONS(528), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [3144] = 1,
    ACTIONS(530), 2,
      ts_builtin_sym_end,
      sym_pipe,
  [3149] = 1,
    ACTIONS(532), 1,
      sym_field_name,
  [3153] = 1,
    ACTIONS(502), 1,
      anon_sym_to,
  [3157] = 1,
    ACTIONS(534), 1,
      sym_field_property,
  [3161] = 1,
    ACTIONS(504), 1,
      anon_sym_to,
  [3165] = 1,
    ACTIONS(536), 1,
      anon_sym_to,
  [3169] = 1,
    ACTIONS(538), 1,
      anon_sym_to,
  [3173] = 1,
    ACTIONS(540), 1,
      sym_field_name,
  [3177] = 1,
    ACTIONS(542), 1,
      sym_field_name,
  [3181] = 1,
    ACTIONS(544), 1,
      sym_field_name,
  [3185] = 1,
    ACTIONS(546), 1,
      sym_field_name,
  [3189] = 1,
    ACTIONS(476), 1,
      anon_sym_COMMA,
  [3193] = 1,
    ACTIONS(548), 1,
      sym_field_name,
  [3197] = 1,
    ACTIONS(550), 1,
      sym_field_property,
  [3201] = 1,
    ACTIONS(190), 1,
      anon_sym_LPAREN_RPAREN,
  [3205] = 1,
    ACTIONS(552), 1,
      ts_builtin_sym_end,
  [3209] = 1,
    ACTIONS(554), 1,
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
  [SMALL_STATE(15)] = 545,
  [SMALL_STATE(16)] = 586,
  [SMALL_STATE(17)] = 627,
  [SMALL_STATE(18)] = 668,
  [SMALL_STATE(19)] = 709,
  [SMALL_STATE(20)] = 750,
  [SMALL_STATE(21)] = 791,
  [SMALL_STATE(22)] = 832,
  [SMALL_STATE(23)] = 873,
  [SMALL_STATE(24)] = 914,
  [SMALL_STATE(25)] = 955,
  [SMALL_STATE(26)] = 996,
  [SMALL_STATE(27)] = 1037,
  [SMALL_STATE(28)] = 1078,
  [SMALL_STATE(29)] = 1119,
  [SMALL_STATE(30)] = 1160,
  [SMALL_STATE(31)] = 1188,
  [SMALL_STATE(32)] = 1211,
  [SMALL_STATE(33)] = 1246,
  [SMALL_STATE(34)] = 1268,
  [SMALL_STATE(35)] = 1287,
  [SMALL_STATE(36)] = 1312,
  [SMALL_STATE(37)] = 1333,
  [SMALL_STATE(38)] = 1351,
  [SMALL_STATE(39)] = 1366,
  [SMALL_STATE(40)] = 1381,
  [SMALL_STATE(41)] = 1398,
  [SMALL_STATE(42)] = 1424,
  [SMALL_STATE(43)] = 1438,
  [SMALL_STATE(44)] = 1456,
  [SMALL_STATE(45)] = 1470,
  [SMALL_STATE(46)] = 1488,
  [SMALL_STATE(47)] = 1514,
  [SMALL_STATE(48)] = 1528,
  [SMALL_STATE(49)] = 1554,
  [SMALL_STATE(50)] = 1580,
  [SMALL_STATE(51)] = 1600,
  [SMALL_STATE(52)] = 1626,
  [SMALL_STATE(53)] = 1646,
  [SMALL_STATE(54)] = 1672,
  [SMALL_STATE(55)] = 1686,
  [SMALL_STATE(56)] = 1707,
  [SMALL_STATE(57)] = 1722,
  [SMALL_STATE(58)] = 1743,
  [SMALL_STATE(59)] = 1764,
  [SMALL_STATE(60)] = 1781,
  [SMALL_STATE(61)] = 1798,
  [SMALL_STATE(62)] = 1815,
  [SMALL_STATE(63)] = 1836,
  [SMALL_STATE(64)] = 1851,
  [SMALL_STATE(65)] = 1868,
  [SMALL_STATE(66)] = 1883,
  [SMALL_STATE(67)] = 1900,
  [SMALL_STATE(68)] = 1921,
  [SMALL_STATE(69)] = 1938,
  [SMALL_STATE(70)] = 1952,
  [SMALL_STATE(71)] = 1964,
  [SMALL_STATE(72)] = 1976,
  [SMALL_STATE(73)] = 1988,
  [SMALL_STATE(74)] = 2014,
  [SMALL_STATE(75)] = 2026,
  [SMALL_STATE(76)] = 2038,
  [SMALL_STATE(77)] = 2050,
  [SMALL_STATE(78)] = 2064,
  [SMALL_STATE(79)] = 2078,
  [SMALL_STATE(80)] = 2092,
  [SMALL_STATE(81)] = 2107,
  [SMALL_STATE(82)] = 2122,
  [SMALL_STATE(83)] = 2145,
  [SMALL_STATE(84)] = 2164,
  [SMALL_STATE(85)] = 2181,
  [SMALL_STATE(86)] = 2198,
  [SMALL_STATE(87)] = 2215,
  [SMALL_STATE(88)] = 2229,
  [SMALL_STATE(89)] = 2237,
  [SMALL_STATE(90)] = 2245,
  [SMALL_STATE(91)] = 2253,
  [SMALL_STATE(92)] = 2267,
  [SMALL_STATE(93)] = 2275,
  [SMALL_STATE(94)] = 2283,
  [SMALL_STATE(95)] = 2291,
  [SMALL_STATE(96)] = 2299,
  [SMALL_STATE(97)] = 2307,
  [SMALL_STATE(98)] = 2315,
  [SMALL_STATE(99)] = 2323,
  [SMALL_STATE(100)] = 2339,
  [SMALL_STATE(101)] = 2351,
  [SMALL_STATE(102)] = 2359,
  [SMALL_STATE(103)] = 2373,
  [SMALL_STATE(104)] = 2381,
  [SMALL_STATE(105)] = 2389,
  [SMALL_STATE(106)] = 2401,
  [SMALL_STATE(107)] = 2409,
  [SMALL_STATE(108)] = 2417,
  [SMALL_STATE(109)] = 2429,
  [SMALL_STATE(110)] = 2442,
  [SMALL_STATE(111)] = 2451,
  [SMALL_STATE(112)] = 2460,
  [SMALL_STATE(113)] = 2469,
  [SMALL_STATE(114)] = 2482,
  [SMALL_STATE(115)] = 2495,
  [SMALL_STATE(116)] = 2506,
  [SMALL_STATE(117)] = 2517,
  [SMALL_STATE(118)] = 2526,
  [SMALL_STATE(119)] = 2537,
  [SMALL_STATE(120)] = 2548,
  [SMALL_STATE(121)] = 2559,
  [SMALL_STATE(122)] = 2570,
  [SMALL_STATE(123)] = 2581,
  [SMALL_STATE(124)] = 2594,
  [SMALL_STATE(125)] = 2607,
  [SMALL_STATE(126)] = 2620,
  [SMALL_STATE(127)] = 2633,
  [SMALL_STATE(128)] = 2642,
  [SMALL_STATE(129)] = 2653,
  [SMALL_STATE(130)] = 2664,
  [SMALL_STATE(131)] = 2675,
  [SMALL_STATE(132)] = 2684,
  [SMALL_STATE(133)] = 2697,
  [SMALL_STATE(134)] = 2710,
  [SMALL_STATE(135)] = 2723,
  [SMALL_STATE(136)] = 2736,
  [SMALL_STATE(137)] = 2749,
  [SMALL_STATE(138)] = 2760,
  [SMALL_STATE(139)] = 2773,
  [SMALL_STATE(140)] = 2784,
  [SMALL_STATE(141)] = 2792,
  [SMALL_STATE(142)] = 2802,
  [SMALL_STATE(143)] = 2812,
  [SMALL_STATE(144)] = 2820,
  [SMALL_STATE(145)] = 2828,
  [SMALL_STATE(146)] = 2836,
  [SMALL_STATE(147)] = 2844,
  [SMALL_STATE(148)] = 2854,
  [SMALL_STATE(149)] = 2864,
  [SMALL_STATE(150)] = 2874,
  [SMALL_STATE(151)] = 2884,
  [SMALL_STATE(152)] = 2892,
  [SMALL_STATE(153)] = 2899,
  [SMALL_STATE(154)] = 2906,
  [SMALL_STATE(155)] = 2913,
  [SMALL_STATE(156)] = 2920,
  [SMALL_STATE(157)] = 2927,
  [SMALL_STATE(158)] = 2932,
  [SMALL_STATE(159)] = 2937,
  [SMALL_STATE(160)] = 2942,
  [SMALL_STATE(161)] = 2947,
  [SMALL_STATE(162)] = 2954,
  [SMALL_STATE(163)] = 2961,
  [SMALL_STATE(164)] = 2968,
  [SMALL_STATE(165)] = 2973,
  [SMALL_STATE(166)] = 2978,
  [SMALL_STATE(167)] = 2985,
  [SMALL_STATE(168)] = 2990,
  [SMALL_STATE(169)] = 2995,
  [SMALL_STATE(170)] = 3000,
  [SMALL_STATE(171)] = 3005,
  [SMALL_STATE(172)] = 3010,
  [SMALL_STATE(173)] = 3015,
  [SMALL_STATE(174)] = 3022,
  [SMALL_STATE(175)] = 3029,
  [SMALL_STATE(176)] = 3034,
  [SMALL_STATE(177)] = 3041,
  [SMALL_STATE(178)] = 3048,
  [SMALL_STATE(179)] = 3055,
  [SMALL_STATE(180)] = 3062,
  [SMALL_STATE(181)] = 3067,
  [SMALL_STATE(182)] = 3072,
  [SMALL_STATE(183)] = 3079,
  [SMALL_STATE(184)] = 3086,
  [SMALL_STATE(185)] = 3093,
  [SMALL_STATE(186)] = 3100,
  [SMALL_STATE(187)] = 3107,
  [SMALL_STATE(188)] = 3112,
  [SMALL_STATE(189)] = 3117,
  [SMALL_STATE(190)] = 3122,
  [SMALL_STATE(191)] = 3129,
  [SMALL_STATE(192)] = 3134,
  [SMALL_STATE(193)] = 3139,
  [SMALL_STATE(194)] = 3144,
  [SMALL_STATE(195)] = 3149,
  [SMALL_STATE(196)] = 3153,
  [SMALL_STATE(197)] = 3157,
  [SMALL_STATE(198)] = 3161,
  [SMALL_STATE(199)] = 3165,
  [SMALL_STATE(200)] = 3169,
  [SMALL_STATE(201)] = 3173,
  [SMALL_STATE(202)] = 3177,
  [SMALL_STATE(203)] = 3181,
  [SMALL_STATE(204)] = 3185,
  [SMALL_STATE(205)] = 3189,
  [SMALL_STATE(206)] = 3193,
  [SMALL_STATE(207)] = 3197,
  [SMALL_STATE(208)] = 3201,
  [SMALL_STATE(209)] = 3205,
  [SMALL_STATE(210)] = 3209,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_where_clause_repeat1, 2), SHIFT_REPEAT(138),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_where_clause_repeat1, 2), SHIFT_REPEAT(134),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_where_clause_repeat1, 2), SHIFT_REPEAT(45),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_where_clause_repeat1, 2), SHIFT_REPEAT(205),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_where_clause_repeat1, 2), SHIFT_REPEAT(96),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_where_clause_repeat1, 2), SHIFT_REPEAT(97),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_where_clause_repeat1, 2), SHIFT_REPEAT(97),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_where_clause_repeat1, 2), SHIFT_REPEAT(205),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_repeat1, 2),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_repeat1, 2), SHIFT_REPEAT(197),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_field_repeat1, 2),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int, 1),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_equals, 1),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_equals, 1),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_where_clause_repeat1, 2),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_where_clause_repeat1, 2),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate_field, 1),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_min, 1),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate, 1),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 3),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 4),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 2),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 2),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 1),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 1),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregate_function, 2, .production_id = 1),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias, 1),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alias, 1),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate, 1),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate_field, 1),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_min, 1),
  [260] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_repeat1, 2), SHIFT_REPEAT(207),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 3),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_parenthesized_expression, 3),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_summarize_clause, 4),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_division, 3),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_multiplication, 3),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregate_function, 2, .production_id = 1),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 4),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_subtraction, 3),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_addition, 3),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compute_clause, 4),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_summarize_clause_repeat1, 4),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_clause, 1),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_clause, 2),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_clause, 2),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_byte, 2),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_clause_repeat1, 2),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_duration, 2),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ip_address, 1),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_summarize_clause_repeat1, 2),
  [345] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_summarize_clause_repeat1, 2), SHIFT_REPEAT(206),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_summarize_clause, 5),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 1),
  [356] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [358] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_clause, 8),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_clause, 7),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [370] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [372] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [378] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 1),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_clause, 2),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_clause, 5),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_summarize_clause, 8),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_clause, 3),
  [396] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_clause_repeat1, 2), SHIFT_REPEAT(190),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_summarize_clause, 6),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 2),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [409] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [411] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_clause, 4),
  [415] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_clause_repeat1, 2), SHIFT_REPEAT(176),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_summarize_clause, 7),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_clause, 6),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [426] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [430] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2),
  [434] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(135),
  [437] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(135),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [442] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(136),
  [445] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(136),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_repeat1, 2),
  [450] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_repeat1, 2), SHIFT_REPEAT(32),
  [453] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compute_clause, 5),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [467] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_where_clause_repeat2, 2), SHIFT_REPEAT(52),
  [470] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sort_clause, 4),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_clause, 3),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_clause, 9),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_clause, 10),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 1),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date_time, 1),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_clause, 2),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sort_clause, 3),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_select_clause, 2),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit_clause, 2),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sort_order, 1),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_clause, 3),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time_frame, 2),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time_frame, 4),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_where_clause_repeat2, 6),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_where_clause_repeat2, 7),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_where_clause_repeat2, 4),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [554] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
