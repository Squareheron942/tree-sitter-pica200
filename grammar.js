module.exports = grammar({
  name: 'pica200',
  extras: $ => [
      / |\t|\r/,
      $.line_comment,
  ],

  rules: {
    program: $ => sep(repeat1('\n'), $._item),
    _item: $ =>
        choice(
            $.instruction,
            $.meta,
        ),
    meta: $ =>
        choice(
            seq(
                field('kind', $.alias),
                seq(choice($.ident, $.reg), choice($.index, field('specifier', optional($.accspec)))),
                $.reg
            ),
            seq(
              field('kind', $.in),
              seq(choice($.ident, $.reg), choice($.index, field('specifier', optional($.accspec)))),
              optional($.reg)
            ),
            seq(
              field('kind', $.out),
              choice(/[-]/, seq(choice($.ident, $.reg), choice($.index, field('specifier', optional($.accspec))))),
              $.propname,
              optional($.reg)
            ),
            seq(
                field('kind', $.meta_ident),
                repeat(seq(',', optional('-'), seq(choice($.ident, $.reg), choice($.index, field('specifier', optional($.accspec))))))
            ),
        ),
    name: $ => /nop|end|emit|setemit|add|dp[34h]|dst|mul|sge|slt|max|min|ex2|lg2|litp|flr|rcp|rsq|mova?|cmp|call[cu]?|for|breakc?|if[cu]|jmp[cu]|mad/,
    instruction: $ => seq(field('kind', $.name), sep(',', seq(optional('-'), seq(choice($.ident, $.reg), choice($.index, field('specifier', optional($.accspec))))))),
    ident: $ => /[a-zA-Z0-9_$]+/,
    reg: $ => token(prec(1, /([bvor]([0-9]|1[0-5])|c([0-8][0-9]?|9[0-5]?)|i[0-3]|a(01|[01L]))/)),
    accspec: $ => seq('.', choice(/[xyzw]+/, /[rgba]+/, /[stuv]+/)),
    index: $ => seq('[', repeat(choice(seq(choice($.ident, $.reg), choice($.index, field('specifier', optional($.accspec)))), $.int, $.float, /[+-]/)), ']'),
    arr: $ => seq('(', sep(',', $.int, $.float), ')'),
    alias: $ => /[.]alias/,
    meta_ident: $ => /[.](else|end|[fi]vec|bool|const(fa?|i)|entry|nodvle|gsh|set[fib]|proc)/,
    in: $ => /([.]in)/,
    out: $ => /([.]out)/,
    propname: $ => /(pos(ition)?|normalquat|nquat|color|clr|t(ex)?coord(0w?|1|2)|view|dummy)/,
    line_comment: $ => /;.*/,
    int: $ => token(prec(3, seq(optional(/-/), /[0-9]+/))),
    float: $ => token(prec(2, seq(optional(/-/), /[0-9]+\.[0-9]+/))),
  }
});

function sep(separator, rule) {
    return optional(seq(rule, repeat(seq(separator, rule)), optional(separator)))
}