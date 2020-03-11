# `tree-sitter-eu4mod` [Alpha]

![GitHub Workflow Status](https://img.shields.io/github/workflow/status/Coyote-31/tree-sitter-eu4mod/Node.js%20CI?label=Node.js%20CI&logo=github) ![npm](https://img.shields.io/npm/v/tree-sitter-eu4mod?color=008EFF&logo=npm)

📦 `tree-sitter-eu4mod` is a global grammar parser for **Europa Universalis IV**.

## Description

This package is a global grammar **parser** for EU4 modding files. Focusing on developers working for EU4 mods, providing them a grammar parser able to handle any file in EU4 directory for modding purpose.

### How to install :

To install this package from the [npmjs repository](https://www.npmjs.com/package/tree-sitter-eu4mod) via CLI :

    npm install tree-sitter-eu4mod

### Which EU4 file extension is managed :

|  Extension   | Supported |
|    :---:     |   :---:   |
| file**.mod** |    ✅     |
| file**.gui** |    ❌     |
| file**.gfx** |    ❌     |

### Which text editor use this package :

- ⚛ **Atom :** with the package [`language-eu4mod`](https://atom.io/packages/language-eu4mod) on Atom.io repository.

## Documentation

### How it works :

The parser is build with a generator tool from the dependency package [`tree-sitter`](https://github.com/tree-sitter/tree-sitter). The grammar is define with a *Javascript* file named `grammar.js` then [`tree-sitter`](https://github.com/tree-sitter/tree-sitter) generate *C* libraries as parsers. And theses parsers can be used in other applications supporting [context-free grammars](https://en.wikipedia.org/wiki/Context-free_grammar) *(eg. [⚛ Atom](https://atom.io))* for the syntax highlighting of eu4 modding files.

### Source archive :

- **[Lastest release](https://github.com/Coyote-31/tree-sitter-eu4mod/releases/latest)**
- **[All releases](https://github.com/Coyote-31/tree-sitter-eu4mod/releases)**

### Any issue or bug : **[report here](https://github.com/Coyote-31/tree-sitter-eu4mod/issues)**

## See also

- **[Tree Sitter](https://tree-sitter.github.io/tree-sitter/)** (documentation web site)
- **[language-eu4mod](https://github.com/Coyote-31/language-eu4mod#README.md)**  (GitHub)

## License

**[MIT](https://github.com/Coyote-31/tree-sitter-eu4mod/blob/master/LICENSE)**
