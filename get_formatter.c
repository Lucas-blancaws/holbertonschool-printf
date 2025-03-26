#include "main.h"

/**
 * get_formatter - Trouve la fonction correspondant à un spécificateur
 * @spec: Le spécificateur de format (ex: 'c', 's', 'd', etc.)
 *
 * Return: Pointeur vers la fonction de formatage correspondante, NULL sinon.
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
