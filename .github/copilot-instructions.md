<!-- Generic instructions for C language based coding -->

# Project general coding standards

---
applyTo: "**"
---

## Naming Conventions
- Use PascalCase for component names, interfaces, and type aliases
- Use camelCase for variables, functions, and methods
- Use ALL_CAPS for constants

## MISRA 2012 Compliance
- Declare all functions with explicit return types and parameter types
- Avoid implicit type conversions; use explicit casts when necessary
- Use `typedef` for all pointer types
- Limit function scope with `static` keyword for internal functions
- Initialize all variables at declaration
- Avoid magic numbers; define them as named constants
- Use `unsigned` types for variables that should never be negative
- Restrict use of goto statements; prefer structured control flow
- Ensure all code paths return a value for non-void functions
- Use assertions to validate preconditions and postconditions

# Commenting style
- Use Doxygen-style comments for functions, classes, and modules
- Provide brief descriptions for all functions, parameters, and return values 
- Use inline comments sparingly to explain complex logic
- Separate code sections with comment blocks for clarity
- Do not leave TODO sections in the codes
- Use proper grammar and spelling in comments
- Avoid redundant comments that do not add value

## Error Handling
- Always use error codes or exceptions for error handling

# Review Checklist
- Ensure adherence to naming conventions
- Verify MISRA 2012 compliance
- Check for proper commenting and documentation
- Validate error handling mechanisms
- Confirm code readability and maintainability
- Ensure no TODO comments are left in the code