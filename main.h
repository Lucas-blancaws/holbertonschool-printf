#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

typedef struct format
{
	char spec;
	int (*func)(va_list);
} format_t;

int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);

int _printf(const char *format, ...);
int (*get_formatter(char spec))(va_list);

int _putchar(char c);
int print_number(int n);

#endif
