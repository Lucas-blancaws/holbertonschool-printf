#include "main.h"
#include <unistd.h>
#include <stdarg.h>
/**
 * _printf - Fonction qui copie le vrai printf
 * @format: La chaîne de format contenant les spécificateurs de form
 * Return: Le nombre total de caractères imprim� (hors caractère nl)
 */
int _printf(const char *format, ...)
{
	va_list args;
	int printed_chars = 0;
	int i = 0;

	va_start(args, format);

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'c')
			{
				printed_chars += _print_char(args);
			}
			else if (format[i] == 's')
			{
				printed_chars += _print_string(args);
			}
			else if (format[i] == '%')
			{
				printed_chars += _write_char('%');
			}
			else
			{
				printed_chars += _write_char('%');
				printed_chars += _write_char(format[i]);
			}
		}
		else
		{
			printed_chars += _write_char(format[i]);
		}
		i++;
	}
	va_end(args);
	return (printed_chars);
}
