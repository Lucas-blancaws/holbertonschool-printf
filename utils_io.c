#include "main.h"

/**
 * _putchar - write a single character to stdout
 * @c: character to write
 *
 * Return: 1 on success, -1 on error.
 */
int _putchar(char c)
{
    ssize_t w = write(1, &c, 1);
    return (w == 1 ? 1 : -1);
}

/**
 * _strlen - get length of C string
 * @s: string pointer
 *
 * Return: length (0 if NULL).
 */
int _strlen(const char *s)
{
    int len = 0;
    if (!s)
        return (0);
    while (s[len])
        len++;
    return (len);
}

/**
 * _puts - write a string to stdout
 * @s: string pointer
 *
 * Prints "(null)" if s is NULL
 * Return: number of characters printed, or -1 on error.
 */
int _puts(const char *s)
{
    int len;
    ssize_t w;

    if (!s)
        s = "(null)";  /* Handle NULL strings gracefully */
    len = _strlen(s);
    w = write(1, s, (size_t)len);
    if (w == -1)
        return (-1);
    return (len);
}
