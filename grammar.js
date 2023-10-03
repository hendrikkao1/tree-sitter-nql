module.exports = grammar({
  name: "nql",

  rules: {
    source_file: ($) => $.query,

    query: ($) => seq($.select_clause, optional(repeat($.clause))),

    table: ($) => seq(/[A-z\.]+/),

    clause: ($) =>
      seq(
        $.pipe,
        choice(
          $.compute_clause,
          $.include_clause,
          $.limit_clause,
          $.list_clause,
          $.sort_clause,
          $.summarize_clause,
          $.where_clause,
          $.with_clause
        )
      ),

    select_clause: ($) => seq($.table, optional($.time_frame)),

    include_clause: ($) => seq("include", $.table, optional($.time_frame)),

    list_clause: ($) =>
      seq("list", $.field, optional(repeat(seq(",", $.field)))),

    sort_clause: ($) =>
      seq("sort", $.field, optional(repeat(seq(",", $.field))), $.sort_order),

    summarize_clause: ($) =>
      seq(
        "summarize",
        seq($.field_name, $.alias, $.expression),
        optional(repeat(seq(",", $.field_name, $.alias, $.expression))),
        optional(
          seq(
            $.by,
            choice(
              $.duration,
              seq($.field, optional(repeat(seq(",", $.field))))
            )
          )
        )
      ),

    compute_clause: ($) =>
      seq(
        "compute",
        seq($.field_name, $.alias, $.expression),
        optional(repeat(seq(",", $.field_name, $.alias, $.expression)))
      ),

    where_clause: ($) => {
      const left = $.field;

      const operators = choice(
        $.equals,
        $.not_equals,
        $.greater_than,
        $.greater_than_or_equals,
        $.less_than,
        $.less_than_or_equals,
        $.in_array,
        $.not_in_array
      );

      const right = choice(
        $.string,
        $.int,
        $.float,
        $.boolean,
        $.byte,
        $.ip_address,
        $.version,
        $.enum,
        $.duration
      );

      const comparison = seq(
        left,
        operators,
        choice(right, seq("[", repeat(seq(right, ",")), right, "]"))
      );

      const joined_comparison = seq(
        repeat(seq(comparison, choice($.and, $.or))),
        comparison
      );

      return seq(
        "where",
        choice(joined_comparison, seq("(", joined_comparison, ")"))
      );
    },

    with_clause: ($) => seq("with", $.table, optional($.time_frame)),

    limit_clause: ($) => seq("limit", $.int),

    expression: ($) =>
      choice(
        $.expression_addition,
        $.expression_subtraction,
        $.expression_multiplication,
        $.expression_division,
        $.expression_parenthesized_expression,
        $.int,
        $.float,
        $.field,
        $.aggregate_function
      ),

    expression_addition: ($) =>
      prec.left(1, seq($.expression, $.addition, $.expression)),

    expression_subtraction: ($) =>
      prec.left(1, seq($.expression, $.subtraction, $.expression)),

    expression_multiplication: ($) =>
      prec.left(2, seq($.expression, $.multiplication, $.expression)),

    expression_division: ($) =>
      prec.left(2, seq($.expression, $.division, $.expression)),

    expression_parenthesized_expression: ($) => seq("(", $.expression, ")"),

    // Things not mentioned in the documentation

    time_frame: ($) =>
      choice(
        seq("during past", $.duration),
        seq("from", $.date, "to", $.date),
        seq("from", $.date_time, "to", $.date_time),
        seq("on", choice($.date))
      ),

    // name
    // device.entity
    // operating_system.platform
    // number_of_errors.sum()
    field: ($) =>
      seq(
        $.field_name,
        repeat(seq(".", $.field_property)),
        optional(seq(".", $.aggregate))
      ),

    field_name: ($) => /[A-z]+[A-z0-9_]*/,

    field_property: ($) => /[A-z]+/,

    sort_order: ($) => choice("asc", "desc"),

    // Data types
    // https://docs.nexthink.com/platform/latest/nql-data-types

    string: ($) =>
      choice(
        seq('"', '"'),
        seq(
          "'",
          repeat1(choice(token.immediate(prec(1, /[^\\'\n]+/)), "\\")),
          "'"
        ),
        seq("'", "'"),
        seq(
          '"',
          repeat1(choice(token.immediate(prec(1, /[^\\"\n]+/)), "\\")),
          '"'
        )
      ),

    int: ($) => /\d+/,

    float: ($) => /\d+\.\d+/,

    boolean: ($) => choice("true", "false"),

    date: ($) =>
      choice(
        // Apr 24
        /.{3} \d{1,2}/,
        // Jan 23, 2021
        /.{3} \d{1,2}, \d{4}/
      ),

    date_time: ($) =>
      choice(
        // 2021-01-15 10:12:01
        /\d{4}-\d{2}-\d{2} \d{1,2}:\d{2}:\d{2}/,
        // 2022-02-28
        /\d{4}-\d{2}-\d{2}/,
        // Jun 15, 12:30
        /\w{3} \d{1,2}, \d{1,2}:\d{2}/,
        // 2021-01-15 10:12
        /\d{4}-\d{2}-\d{2} \d{1,2}:\d{2}/,
        // Jan 23, 2021, 10:00
        /\w{3} \d{1,2}, \d{4}, \d{1,2}:\d{2}/,
        // Jan 23, 2021 10:00:00
        /\w{3} \d{1,2}, \d{4} \d{1,2}:\d{2}:\d{2}/,
        // Jan 23, 2021, 10:00 AM
        /\w{3} \d{1,2}, \d{4}, \d{1,2}:\d{2} [AP]M/,
        // Jan 23, 2021, 10:00:00 AM
        /\w{3} \d{1,2}, \d{4}, \d{1,2}:\d{2}:\d{2} [AP]M/,
        // Jan 23, 2021 10:00 PM
        /\w{3} \d{1,2}, \d{4} \d{1,2}:\d{2} [AP]M/,
        // Jan 23, 2021 10:00:00 PM
        /\w{3} \d{1,2}, \d{4} \d{1,2}:\d{2}:\d{2} [AP]M/
      ),

    // Sets of named things
    // Red
    // Blue
    // White
    enum: ($) => /[A-z\.]+/,

    // 100B
    // 200KB
    // 3MB
    // 12GB
    // 2TB
    byte: ($) => seq(/\d+/, choice("B", "KB", "MB", "GB", "TB")),

    // 5ms
    // 10s
    // 4min
    // 3h
    // 2d
    duration: ($) => seq(/\d+/, choice("ms", "s", "min", "h", "d")),

    ip_address: ($) =>
      choice(
        // 123.123.0.0
        /\d{1,3}\.\d{1,3}\.\d{1,3}\.\d{1,3}/,
        // 123.123.0.0/24
        /\d{1,3}\.\d{1,3}\.\d{1,3}\.\d{1,3}\/\d{1,2}/,
        // f164:b28c:84a5:9dd3:ef21:8c9d:d3ef:218c
        /[0-9a-f]{1,4}(:[0-9a-f]{1,4}){7}/,
        // f164:b28c:84a5:9dd3::/32
        /[0-9a-f]{1,4}(:[0-9a-f]{1,4}){2,7}::\/\d{1,2}/,
        // Generic
        /\d{1,3}\.\d{1,3}\.\d{1,3}\.\d{1,3}(\/\d{1,2})?/
      ),

    // v12.212
    // v1.2.5.9
    // v13.5.10
    // v2022.6
    // v1.2.4125
    // v6.8.9.7.6.5.4.3
    version: ($) => /v\d+(\.\d+)+/,

    // Syntax operators
    // https://docs.nexthink.com/platform/latest/nql-syntax-operators

    alias: () => "=",

    pipe: () => "|",

    // Arithmetic operators

    addition: () => "+",

    subtraction: () => "-",

    division: () => "/",

    multiplication: () => "*",

    // Comparison operators
    // https://docs.nexthink.com/platform/latest/nql-comparison-operators

    equals: () => choice("=", "=="),

    not_equals: () => "!=",

    greater_than: () => ">",

    greater_than_or_equals: () => ">=",

    less_than: () => "<",

    less_than_or_equals: () => "<=",

    // Logical operators
    // https://docs.nexthink.com/platform/latest/nql-logical-operators

    in_array: () => "in",

    not_in_array: () => "!in",

    // Bitwise operators
    // https://docs.nexthink.com/platform/latest/nql-bitwise-operators

    and: () => "and",

    or: () => "or",

    // Aggregates
    // https://docs.nexthink.com/platform/latest/nql-aggregates

    count: () => "count",

    avg: () => "avg",

    sum: () => "sum",

    max: () => "max",

    min: () => "min",

    last: () => "last",

    aggregate_field: ($) => choice($.count, $.avg, $.sum, $.max, $.min, $.last),

    aggregate_function: ($) =>
      seq($.aggregate_field, field("aggregate_function_call", "()")),

    aggregate: ($) => choice($.aggregate_field, $.aggregate_function),

    // Windowing
    // https://docs.nexthink.com/platform/latest/nql-aggregates
    // Group "by" field
    // Window "by" time
    by: ($) => "by",
  },
});
