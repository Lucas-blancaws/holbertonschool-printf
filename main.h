#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdarg.h>

/**
 * struct format_specifier - Defines a format specifier for printf function.
 *
 * Maps a format specifier character to a function that processes it.
 * @spec : The format specifier (e.g., 'c', 's', 'd', etc.)
 * @func : Pointer to the get_formatter function.
 */
typedef struct format_specifier
{
	const char spec;
	int (*func)(va_list args);
} format_t;


int _printf(const char *format, ...);
int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);
int print_decimal(va_list args);
int print_int(va_list args);
int _putchar(char c);
int (*get_formatter(char spec))(va_list);

#endif
