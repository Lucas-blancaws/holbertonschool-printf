# _printf

## 📖 Description

`_printf` is a custom implementation of the C standard library function `printf`. This project is designed to reinforce key C programming concepts, including:

- Variadic functions
- Format specifiers
- Standard output handling (`stdout`)

The `_printf` function is developed to run in a **Linux environment** using **GCC** on **Ubuntu 20.04**.

---

## 🧰 Requirements

To use or modify `_printf`, ensure you have the following:

- **Operating System**: Ubuntu 20.04 LTS
- **Compiler**: GCC with the flags:
  ```bash
  -Wall -Werror -Wextra -pedantic -std=gnu89
  ```
- **Version Control**: Git
- **Knowledge of C programming**, especially variadic functions and file handling.

---

## 📦 Compilation

To compile the project, ensure all `.c` files are in the same directory, then use:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o _printf
```

---

## 🔧 Supported Format Specifiers

| Specifier | Description                                 | Example                      |
|-----------|---------------------------------------------|------------------------------|
| `%c`      | Prints a single character                   | `_printf("%c", 'A');`        |
| `%s`      | Prints a string                             | `_printf("%s","Hey");`      |
| `%d`      | Prints a signed decimal integer             | `_printf("%d", -123);`       |
| `%i`      | Prints a signed decimal integer (same as %d)| `_printf("%i", 456);`        |
| `%%`      | Prints a literal `%` character              | `_printf("%%");`             |

---

## Usage Examples

### Basic Usage

```c
_printf("Hello, World!\n");
// Output: Hello, World!
```

### Using Format Specifiers

```c
_printf("Character: %c\n", 'A');
// Output: Character: A

_printf("String: %s\n", "This is _printf");
// Output: String: This is _printf

_printf("Percent sign: %%\n");
// Output: Percent sign: %

_printf("Integer: %d\n", 123);
// Output: Integer: 123

```

---
## 🗂️ Project Files

| File              | Description |
|------------------|-------------|
| `main.h`         | Header file containing function prototypes and type definitions. |
| `_printf.c`      | Main function implementing `_printf`. |
| `print_function.c` | Handles `%c`, `%s`, `%d`, and `%i` format specifiers. |
| `utils.c`        | Contains helper functions like `_putchar`. |
| `man_3_printf`   | Manual page describing `_printf`. |
| `Makefile`       | Build automation file |
---

## 🛠 Logic Implementation

The `_printf` function follows a modular approach:

1. Processes the input format string.
2. Identifies format specifiers.
3. Calls the corresponding function to handle the specifier.
4. Outputs the result to `stdout`.

---

- ## 🗺️ Flowchart
![alt text](<assets/flowchart printf.jpg>)

---

## 📖 Man Page

To view the manual page for `_printf`, run:

```bash
man ./man_3_printf
```

Contents:
- NAME
- SYNOPSIS
- DESCRIPTION
- USAGE EXAMPLES
- LIMITATIONS

---

## ✅ Testing

### Example Test File

Create a `main.c` file to test `_printf`:

```c
#include "main.h"

int main(void)
{
    _printf("Hello, World!\n");
    _printf("Number: %d\n", 42);
    return (0);
}
```

Compile and run:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o test
./test
```
### Memory Leak Check (Valgrind)

To check for memory leaks:

```bash
valgrind --leak-check=full --track-origins=yes ./_printf
```

---

## 🚨 Limitations

- Flags (`+`, `-`, `0`, etc.) are not supported.
- Field width and precision are not implemented.
- Buffering differs from the standard `printf`.
- Only a subset of `printf` functionalities are included.

---

## 👨‍💻 Authors

- **Lucas Blancportier**  
  - [GitHub] (https://github.com/Lucas-blancaws)  
  - [Email] (lblancportier@gmail.com)

- **Sunny Pritchard**  
  - [GitHub] (https://github.com/sunnypritchard)
  - [Email] (pritchardsunny@gmail.com)

---

## 🔗 References
