module.exports = grammar({
  name: 'eu4mod',

  rules: {
    // TODO: add the actual grammar rules
    file: $ => repeat($.hello),

    hello: $ => 'hello'
  }
});
