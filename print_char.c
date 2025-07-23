#include "main.h"

/**
 * print_char - print a single character (%c)
 * @ap: active variadic list (expects int)
 *
 * Return: 1 on success, -1 on error.
 */
int print_char(va_list ap)
{
    int c = va_arg(ap, int);
    if (_putchar(c) == -1)
        return (-1);
    return (1);
}
