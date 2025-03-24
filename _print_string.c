#include "main.h"
#include <unistd.h>
#include <stdarg.h>
#include <string.h>
/**
 * _print_string - Affiche une chaîne de aractère
 * @args: Liste d'arguments contenant la chaîn a afficher
 * Cette fonction récupère la chae de la liste d'arguments et l'affiche
 * en appelant `_write_string`
 * Return: nb de caractères imprim (dépend de la longueur de la caine)
 */
int _print_string(va_list args)
{
	char *str = va_arg(args, char *);

	return (_write_string(str));
}
