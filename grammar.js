module.exports = grammar({
  name: "nql",

  rules: {
    // TODO: add the actual grammar rules
    source_file: ($) => $.query,

    query: ($) => seq($.table, $.timeFrame, repeat($.statment)),

    table: ($) => seq(/[a-z]+/, optional(seq(".", /[a-z]+/))),

    statment: ($) =>
      seq(
        $.statmentStep,
        choice(
          $.includeStatment,
          $.listStatment,
          $.sortStatment,
          $.summarizeStatment,
          $.whereStatment,
          $.withStatment
        )
      ),

    statmentStep: ($) => "|",

    includeStatment: ($) =>
      seq("include", $.table, optional($.timeFrame), /.+/),

    listStatment: ($) => seq("list", /.+/),

    sortStatment: ($) => seq("sort", /.+/),

    summarizeStatment: ($) => seq("summarize", /.+/),

    whereStatment: ($) => seq("where", /.+/),

    withStatment: ($) => seq("with", $.table, /.+/),

    timeFrame: ($) => seq("during past", $.time),

    time: ($) => choice(/\d+min/, /\d+h/, /\d+d/, /\d+w/, /\d+m/, /\d+y/),
  },
});
