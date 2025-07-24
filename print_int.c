#include "main.h"

/**
 * print_number - print a base-10 integer
 * @n: integer value
 *
 * Return: number of characters printed, -1 on error.
 */
int print_number(int n)
{
	int count = 0;
	unsigned int num;

	if (n < 0)
	{
		if (_putchar('-') == -1)
			return (-1);
		count++;
		num = -n;
	}
	else
	{
		num = n;
	}

	if (num / 10)
	{
		int tmp = print_number(num / 10);
		if (tmp == -1)
			return (-1);
		count += tmp;
	}

	if (_putchar((num % 10) + '0') == -1)
		return (-1);
	return (++count);
}

/**
 * print_int - handle %d and %i conversions
 * @ap: active variadic argument list (expects int)
 *
 * Return: number of characters printed, -1 on error.
 */
int print_int(va_list ap)
{
	int n = va_arg(ap, int);
	return (print_number(n));
}
