#ifndef PRINTF_H
#define PRINTF_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

typedef struct format_specifier
{
	char spec;
	int (*func)(va_list args);
} format_specifier_t;

int _printf(const char *format, ...);
int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);
int print_decimal(va_list args);
int print_int(va_list args);
int _putchar(char c);

#endif