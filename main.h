#ifndef MAIN_H
#define MAIN_H

#include  <stdarg.h>
#include  <unistd.h>
#include <stdlib.h>

/**
 * typedef printer_f - pointer to a print handler function
 * @ap: active variadic argument list
 *
 * Each handler prints to STDOUT and returns number of characters printed,
 * or -1 on error.
 */
typedef int (*printer_f)(va_list ap);

/**
 * struct format_spec - maps a conversion specifier to a print handler
 * @spec: the format specifier character (e.g. 'c', 's', 'd', 'i', '%')
 * @fn:   pointer to the handler function for this specifier
 */
typedef struct format_spec
{
    char spec;
    printer_f fn;
} fmt_t;

/* ========== Core ========= */
int _printf(const char *format, ...);
printer_f get_handler(char spec);

/* ========== Handlers ========= */
int print_char(va_list ap);
int print_string(va_list ap);
int print_percent(va_list ap);

/* ========== Output Utilities ========= */
int _putchar(char c);
int _puts(const char *s);
int _strlen(const char *s);

#endif
