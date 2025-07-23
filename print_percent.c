#include "main.h"

/**
 * print_percent - print a literal percent (%%)
 * @ap: active variadic list (unused)
 *
 * Return: 1 on success, -1 on error.
 */
int print_percent(va_list ap __attribute__((unused)))
{
    if (_putchar('%') == -1)
        return (-1);
    return (1);
}
