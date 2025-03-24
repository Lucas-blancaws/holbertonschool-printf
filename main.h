#ifndef _PRINTF_H
#define _PRINTF_H
#include <stdarg.h>
int _printf(const char *format, ...);
int _print_char(va_list args);
int _print_string(va_list args);
int _write_char(char c);
int _write_string(char *str);
#endif
