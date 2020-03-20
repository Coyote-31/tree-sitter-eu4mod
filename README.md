# **`tree-sitter-eu4mod`** [Alpha]

[![npm](https://img.shields.io/npm/v/tree-sitter-eu4mod?color=%23147dce&logo=npm)](https://www.npmjs.com/package/tree-sitter-eu4mod) [![GitHub Workflow Status](https://img.shields.io/github/workflow/status/Coyote-31/tree-sitter-eu4mod/Node.js%20CI?label=Node.js%20CI&logo=github)](https://github.com/Coyote-31/tree-sitter-eu4mod/actions?query=workflow%3A%22Node.js+CI%22) [![GitHub](https://img.shields.io/github/license/Coyote-31/tree-sitter-eu4mod?color=%230f1014)](https://github.com/Coyote-31/tree-sitter-eu4mod/blob/master/LICENSE)

📦 `tree-sitter-eu4mod` is a global grammar parser for **Europa Universalis IV**.


## 📄 Description

This package is a global **grammar parser** for **EU4** files. Focusing on developers working on EU4 mods and providing them a grammar parser able to handle any file in EU4 directory for modding purpose.


### How to install :

To install this package from the [npmjs repository](https://www.npmjs.com/package/tree-sitter-eu4mod) via CLI :

    npm install tree-sitter-eu4mod


### Which EU4 file extension is managed :

| Extension | Supported |
|   :---:   |   :---:   |
|   .mod    |    ✅     |
|   .gfx    |    ✅     |
|   .gui    |    ❌     |


### Which text editor use this package :

- **[⚛ Atom](https://atom.io)** : With the package [`language-eu4mod`](https://atom.io/packages/language-eu4mod) on [atom.io](https://atom.io/packages/) registry.


## 📚 Documentation


### How it works :

The parser is build with a generator tool from the dependency package [`tree-sitter`](https://github.com/tree-sitter/tree-sitter). The grammar is define with a *Javascript* file named `grammar.js` then [`tree-sitter`](https://github.com/tree-sitter/tree-sitter) generate *C* libraries as parsers. And theses parsers can be used in other applications supporting [context-free grammars](https://en.wikipedia.org/wiki/Context-free_grammar) (eg. [⚛ Atom](https://atom.io)) for the syntax highlighting of eu4 modding files.


### Source archive :

| Link | Info |
|    :---:     |   :---:   |
**[GitHub repository](https://github.com/Coyote-31/tree-sitter-eu4mod)** | [![GitHub commits](https://badgen.net/github/commits/Coyote-31/tree-sitter-eu4mod?icon=git&label=total%20commits)](https://github.com/Coyote-31/tree-sitter-eu4mod/commits/master)
**[Last release](https://github.com/Coyote-31/tree-sitter-eu4mod/releases/latest)** | [![GitHub tag (latest by date)](https://badgen.net/github/tag/Coyote-31/tree-sitter-eu4mod?icon=atom&label=last%20release)](https://github.com/Coyote-31/tree-sitter-eu4mod/releases/latest)
**[All releases](https://github.com/Coyote-31/tree-sitter-eu4mod/releases)** | [![total releases](https://badgen.net/github/tags/Coyote-31/tree-sitter-eu4mod?icon=npm&label=total%20releases)](https://github.com/Coyote-31/tree-sitter-eu4mod/releases)


## 🐛 Any issue or bug **[report here](https://github.com/Coyote-31/tree-sitter-eu4mod/issues)**
If you have any issue or find a bug please :

| **[Open an issue on GitHub](https://github.com/Coyote-31/tree-sitter-eu4mod/issues)** | ![GitHub issues](https://img.shields.io/github/issues/Coyote-31/tree-sitter-eu4mod?logo=github) |
|    :---:     |   :---:   |


## 🔍 See also

- **[Tree Sitter](https://tree-sitter.github.io/tree-sitter/)** (documentation web site)
- **[language-eu4mod](https://github.com/Coyote-31/language-eu4mod#README.md)**  (GitHub)


## ©️ License

**[MIT](https://github.com/Coyote-31/tree-sitter-eu4mod/blob/master/LICENSE)**
