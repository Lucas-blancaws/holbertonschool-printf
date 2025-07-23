#ifndef MAIN_H
#define MAIN_H

#include  <stdarg.h>
#include  <unistd.h>
#include <stdlib.h>

typedef int (*printer_f)(va_list ap);

/**
 * struct format_spec - maps a conversion specifier to a print handler
 * @spec: the format specifier character (e.g. 'c', 's', 'd', 'i', '%')
 * @fn:   pointer to the handler function for this specifier
 */
typedef struct format_spec
{
    char spec;
    printer_f fn;
} fmt_t;

/* ========= PROTOTYPES ========= */
int _printf(const char *format, ...);

#endif
