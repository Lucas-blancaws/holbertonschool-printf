#include "main.h"

/**
* _printf - Produces output according to a format
* @format: Format string
*
* Return: Number of characters printed, or -1 on error
*/

int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

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
			if (format[i] == '\0')
			{
				va_end(args);
				return (-1);
			}
			func = get_formatter(format[i]);
			if (func)
			count += func(args);
			else
			{
				count += _putchar('%');
				count += _putchar(format[i]);
			}
		}
		else
		{
			count += _putchar(format[i]);
		}
		i++;
	}
	va_end(args);
	return (count);
}
