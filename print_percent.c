#include "main.h"

/**
 * print_percent - Prints a percent sign
 * @args: Unused argument
 *
 * Return: Number of characters printed (always 1)
*/
int print_percent(va_list args)
{
	(void)args;
	return (_putchar('%'));
}
