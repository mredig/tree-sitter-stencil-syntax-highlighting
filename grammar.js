module.exports = grammar({
  name: 'stencil',

  rules: {
    template: $ => repeat($._content),

    _content: $ => choice(
      $.text,
      $.expression,
      $.statement,
      $.comment
    ),

    // Plain text content
    text: $ => /[^{]+/,

    // {{ expression }}
    expression: $ => seq(
      '{{',
      optional(/\s*/),
      $.expression_content,
      optional(/\s*/),
      '}}'
    ),

    expression_content: $ => /[^}]+/,

    // {% statement %}
    statement: $ => seq(
      '{%',
      optional(/\s*/),
      $.statement_content,
      optional(/\s*/),
      '%}'
    ),

    statement_content: $ => /[^%]+/,

    // {# comment #}
    comment: $ => seq(
      '{#',
      optional($.comment_content),
      '#}'
    ),

    comment_content: $ => /[^#]*/,
  }
});