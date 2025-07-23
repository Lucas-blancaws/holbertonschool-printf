# C - printf

A custom implementation of the C standard library `printf` function, created as part of the Holberton School low-level programming curriculum.

## Current Status – Sprint 1 (Task 0)
Supports the following conversion specifiers:
- `%c` (character)
- `%s` (string; `NULL` prints `(null)`)
- `%%` (literal percent)

### Local Testing vs libc printf
When compiling local test files that include the standard `printf` (and may use unsupported specs), you may temporarily suppress format warnings:
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c tests/sprint1_main.c -o test_printf
```

## Requirements
- Ubuntu 20.04 LTS
- gcc flags: `-Wall -Werror -Wextra -pedantic -std=gnu89`
- Betty style
- No global variables
- ≤5 functions per file