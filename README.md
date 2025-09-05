# Tree-sitter Grammar for Stencil Templates

A simple tree-sitter grammar for parsing Stencil template language syntax.

## What is Stencil?

Stencil is a simple and powerful template language for Swift, providing Django-inspired template inheritance and commonly used with tools like Sourcery for code generation.

## Supported Syntax

This grammar recognizes the basic Stencil template constructs:

- **Expressions**: `{{ variable }}`, `{{ object.property }}`
- **Statements**: `{% if condition %}`, `{% for item in items %}`, `{% block name %}`
- **Comments**: `{# This is a comment #}`
- **Plain text**: Everything outside of template tags

## Building

### Prerequisites

- Node.js and npm installed
- tree-sitter CLI (installed as dev dependency)

### Generate Parser
1. Install node via whatever source you prefer, for example, brew:
	```bash
	brew install node
	```

1. Install dependencies:
	```bash
	npm install
	```

1. Generate the parser files:
	```bash
	npx tree-sitter generate
	```

This will create the following files in the `src/` directory:
- `parser.c` - The compiled parser (required for Zed)
- `grammar.json` - Grammar metadata
- `node-types.json` - Available AST node types
- `tree_sitter/` - C headers

### Testing (Optional)

You can test the grammar with sample files:

```bash
npx tree-sitter parse examples/test.stencil
```

## Usage with Zed

This grammar is designed to be used with the Zed editor extension. The compiled `src/parser.c` file is required for the extension to work.

## Grammar Structure

The grammar defines these main rules:

- `template` - Root node containing all content
- `expression` - `{{ ... }}` expressions
- `statement` - `{% ... %}` statements
- `comment` - `{# ... #}` comments
- `text` - Plain text content

## Development

To modify the grammar:

1. Edit `grammar.js`
2. Run `npx tree-sitter generate` to regenerate parser files
3. Test your changes with `npx tree-sitter parse <test-file>`
4. Update the Zed extension to use the new commit hash

## License

MIT License
