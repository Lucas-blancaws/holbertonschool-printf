#include "main.h"

/**
 * handle_directive - dispatch a single conversion directive
 * @ap: active variadic list
 * @c:  specifier character following '%'
 *
 * Return: number characters printed, or -1 on error.
 */
static int handle_directive(va_list ap, char c)
{
    printer_f fn;

    fn = get_handler(c);
    if (fn)
        return fn(ap);
    
    /* Unknown specifier: print as literal "%" then that char. */
    if (_putchar('%') == -1)
        return (-1);
    if (_putchar(c) == -1)
        return (-1);
    return (2);
}

/**
 * _printf - produce output according to a format string 
 * @format: format string containing optional conversion directives
 *
 * Supported: %c %s %%
 *
 * Return: number of characters printed (excluding terminating null byte),
 * or -1 on error (NULL format, write failure, or incomplete directive).
 */
int _printf(const char *format, ...)
{
    va_list ap;
    int count = 0, i = 0;

    if (!format)
        return (-1); /* NULL format string */

    va_start(ap, format);

    while (format[i])
    {
        if (format[i] == '%')
        {
            i++;
            if (!format[i]) /* Trailing '%' */
                return (-1);
            count += handle_directive(ap, format[i]);
        }
        else
        {
            if (_putchar(format[i]) == -1)
                return (-1);
            count++;
        }
        i++;
    }

    va_end(ap);
    return (count);   
}
