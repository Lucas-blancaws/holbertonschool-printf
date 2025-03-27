#include "main.h"
/**
 * _printf - Function that mimics the real printf
 * @format: The format string containing the specifiers
 * Return: The total number of characters printed (excluding '\0')
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
				if (format[i] != '\0')
				{
					printed_chars += _putchar('%');
					printed_chars += _putchar(format[i]);
				}
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
