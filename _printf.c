#include "main.h"

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
			func = get_formatter(format[i]);
			if (func)
			count += func(args);
			else
			{
				if (format[i] != '\0')
				{
					count += _putchar('%');
					count += _putchar(format[i]);
				}
				else
				return (-1);
			}
		}
        else
        {
        count += _putchar(format[i]);
        }
        i++;
    }
    va_end(args);
    return(count);
}
