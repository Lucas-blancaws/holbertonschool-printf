#include "main.h"

/**
 * _printf - Fonction qui copie le vrai printf
 * @format: La chaîne de format contenant les spécificateurs
 * Return: Le nombre total de caractères imprimés (hors '\0')
 */

int _printf(const char *format, ...)
{
	va_list args;
	int printed_chars = 0;
	int i = 0;
	int (*func)(va_list);


	if (format == NULL)
	return (-1);

	va_start(args, format);

	while (format[i] != '\0')
	{

		if (format[i] == '%')
		{
			i++;
			func = get_formatter(format[i]);
			if (func)
			printed_chars += func(args);
			else
			{
				printed_chars += _putchar('%');
				if (format[i] != '\0')
				printed_chars += _putchar(format[i]);
				else
				return (-1);
			}
		}
		else
		{
			printed_chars += _putchar(format[i]);
		}
		i++;
	}

	va_end(args);
	return (printed_chars);
}
