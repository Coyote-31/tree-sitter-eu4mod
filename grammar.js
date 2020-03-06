module.exports = grammar({
  name: 'eu4mod',


  rules: {

    file: $ => choice(
      $.dot_mod
    ),

    //// Rules for *.mod :

    dot_mod: $ => repeat1(choice(
      $.mod_mono_line,
      $.mod_multi_line
    )),

    // Manage space in monoline declaration
    mod_mono_line: $ => prec.left(seq(
      optional($.warning_space_tab),
      $.mod_var_name,
      optional(seq(
        optional($.warning_space_tab),
        $.mod_equal,
        optional($.warning_space_tab),
        $.mod_var_value,
        optional($.warning_space_tab),
        optional($._carriage_return)
      ))
    )),

    mod_multi_line: $ => seq(
      optional($.warning_space_tab),
      $.mod_var_name_multi,
      optional(seq(
        $.mod_equal,
        '{',
        repeat(seq(
          /\s/,
          $.mod_var_value,
          $._carriage_return
        )),
        '}',
        optional($.warning_space_tab),
        $._carriage_return
      ))
    ),

    mod_var_name: $ => token.immediate(choice(
      'name',
      'supported_version',
      'version',
      'path',
      'archive',
      'picture',
      'remote_file_id'
    )),

    mod_var_name_multi: $ => token.immediate(choice(
      'tags',
      'dependencies'
    )),

    mod_equal: $ => token.immediate('='),

    mod_var_value: $ => token.immediate(/\"[^\"\n]*\"/),

    _carriage_return: $ => /\r?\n/,

    warning_space_tab: $ => /\s+/,

    debug: $ => /.+/
  }
});
