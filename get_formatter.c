#include "main.h"
/**
 * get_formatter - Selects the correct format handler
 * @spec: Format specifier
 *
 * Return: Pointer to handler function, or NULL
 */
int (*get_formatter(char spec))(va_list)
{
	format_t formats[] = {
		{'c', print_char},
		{'%', print_percent},
		{'s', print_string},
		{0, NULL}
	};

	int i = 0;

	while (formats[i].spec != 0)
	{
		if (formats[i].spec == spec)
		return (formats[i].func);
		i++;
	}
	return (NULL);
}
