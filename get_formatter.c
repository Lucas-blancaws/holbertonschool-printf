#include "main.h"

/**
 * get_formatter - Finds the function corresponding to a specifier
 * @spec: The format specifier (e.g., 'c', 's', 'd', etc.)
 *
 * Return: Pointer to the corresponding formatting function, NULL otherwise.
 */
int (*get_formatter(char spec))(va_list)
{
	format_t formats[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_percent},
		{'d', print_decimal},
		{'i', print_int},
		{0, NULL}
	};

	int i = 0;

	while (formats[i].spec)
	{
		if (formats[i].spec == spec)
		return (formats[i].func);
		i++;
	}

	return (NULL);
}
