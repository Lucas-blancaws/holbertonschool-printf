#include "_printf.h"
#include <unistd.h>
#include <stdarg.h>
/**
 * _print_char - Affiche un caractère.
 * @args: Liste d'arguments contenant le caractèr a afficher
 * Cette fonction récupère un caractère de la liste d'arguments et l'affi
 * en appelant `_write_char`
 * Return: Le nombre de caractères imprimés(généraleme 1)
 */
int _print_char(va_list args)
{
	char c = va_arg(args, int);

	return (_write_char(c));
}
