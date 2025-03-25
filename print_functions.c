#include "main.h"

int print_char(va_list args)
{

}
int print_string(va_list args)
{

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
int print_decimal(va_list args)
{

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
