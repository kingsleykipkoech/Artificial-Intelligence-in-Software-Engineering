# AI: Pre-processor Co-pilot

## Task Overview
This task demonstrates using AI as a "Macro Safety Inspector" and "Conditional Code Generator." I asked the AI to review an initial flawed macro prone to operator precedence issues, and subsequently generate a robust conditional compilation scaffold.

## AI Tool Used
- Gemini

## File List
- [initial_macro.c](./initial_macro.c) - The unsafe initial macro with missing parentheses, causing operator precedence bugs.
- [refactored_macro.c](./refactored_macro.c) - The post-AI code with correct parenthesization and a debug toggle using conditional compilation guards.
