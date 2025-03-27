#include "main.h"

/**
 * print_char - Function to print a single letter
 * @args: va_list containing the argument for the letter
 *
 * Return: Number of characters printed (1)
 */
int print_char(va_list args)
{
	char c = va_arg(args, int);

	return (_putchar(c));
}

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

/**
 * print_percent - Prints a '%' character.
 * @args: The va_list (not used in this function).
 *
 * Return: Always returns 1 (one character printed).
 */
int print_percent(va_list args)
{
	(void)args;
	return (_putchar('%'));
}

/**
 * print_decimal - Prints an integer in decimal format.
 * @args: The va_list containing the integer to print.
 *
 * Return: The number of characters printed.
 */
int print_decimal(va_list args)
{
	int n = va_arg(args, int);
	unsigned int num;
	int count = 0;
	int digits[10];
	int i = 0;

	if (n < 0)
	{
		count += _putchar('-');
		num = -n;
	}
	else
	{
		num = n;
	}

	if (num == 0)
	{
		count += _putchar('0');
		return (count);
	}

	while (num > 0)
	{
		digits[i++] = num % 10;
		num /= 10;
	}

	while (i > 0)
	{
		count += _putchar('0' + digits[--i]);
	}

	return (count);
}

/**
 * print_int - Prints an integer using print_decimal.
 * @args: The va_list containing the integer to print.
 *
 * Return: The number of characters printed.
 *
 * Description: This function is a wrapper around print_decimal
 * because the 'i' specifier behaves the same as the 'd' specifier.
 */
int print_int(va_list args)
{
	return (print_decimal(args));
}
