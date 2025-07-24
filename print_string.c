#include "main.h"
/**
 * print_string - Displays a string of characters
 * @args: List of arguments containing the string to be displayed
 * This function retrieves the string from the argument list and displays it
 * by calling `_write_string`
 * Return: Number of characters printed (depends on the length of the string)
 */
int print_string(va_list args)
{
	char *str = va_arg(args, char *);
	int count = 0;

	if (!str)
		str = "(null)";

	while (*str)
		count += _putchar(*str++);

	return (count);
}
