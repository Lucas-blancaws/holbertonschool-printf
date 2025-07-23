#include "main.h"

/**
 * get_printer - return handler function for a specifier
 * @c: specifier character
 *
 * Return: pointer to handler, or NULL if unsupported.
 */
printer_f get_handler(char c)
{
    /* Table is function-scope static to avoid global variable rule intent. */
    static fmt_t handlers[] = {
        {'c', print_char},
        {'s', print_string},
        {'%', print_percent},
        {'\0', NULL}
    };
    int i = 0;

    while (handlers[i].spec != '\0')
    {
        if (handlers[i].spec == c)
            return (handlers[i].fn);
        i++;
    }
    return (NULL);
}
