#include "main.h"

/**
 * print_string - print a string (%s)
 * @ap: active variadic list (expects char *)
 *
 * NULL strings print as "(null)" to mimic libc printf behavior.
 *
 * Return: number chars printed, or -1 on error.
 */
int print_string(va_list ap)
{
    char *s = va_arg(ap, char *);

    if (!s)
        s = "(null)";  /* Handle NULL strings gracefully */
    return _puts(s);
}
