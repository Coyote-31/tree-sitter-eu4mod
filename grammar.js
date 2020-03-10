module.exports = grammar({
  name: 'eu4mod',


  rules: {

    file: $ => choice(
      $.dot_mod
    ),

    //// Rules for *.mod :

    // Main rule and handle the single line file without \n
    dot_mod: $ => seq(
      repeat($._carriage_return),
      choice($.mod_mono_line, $.mod_multi_line),
      repeat(seq(
        repeat1($._carriage_return),
        choice($.mod_mono_line, $.mod_multi_line)
      )),
      repeat($._carriage_return)
    ),

    // Manage space in monoline declaration
    mod_mono_line: $ => prec.left(2, seq(
      repeat($.warning_space_tab),
      $.mod_var_name,
      repeat($.warning_space_tab),
      optional(seq(
        repeat($.warning_space_tab),
        $.mod_equal,
        repeat($.warning_space_tab),
        $.mod_var_value
      ))
    )),

    mod_multi_line: $ => seq(
      repeat($.warning_space_tab),
      $.mod_var_name_multi,
      optional(seq(
        repeat($.warning_space_tab),
        $.mod_equal,
        repeat($.warning_space_tab),
        '{',
        repeat($.mod_multi_line_content),
        repeat($.warning_space_tab),
        '}'
      ))
    ),

    mod_multi_line_content: $ =>choice(
      seq(
        repeat($.warning_space_tab),
        $.mod_var_value,
      ),
      seq(
        repeat(seq(
          $._carriage_return,
          /\t| {2}/,
          repeat($.warning_space_tab),
          $.mod_var_value
        )),
        $._carriage_return
      ),
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

    warning_space_tab: $ => /\t| ]/,

    debug: $ => /.+/
  }
});
