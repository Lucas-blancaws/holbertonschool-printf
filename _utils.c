#include "main.h"
#include <unistd.h>
#include <string.h>
/**
 * _write_char - ecrit un caractère sur l sortie standard
 * @c: Le caractèe a affichr
 * Return: le nombre de caractères écrit(generalement 1)
 */
int _write_char(char c)
{
	return (write(1, &c, 1));
}

/**
 * _write_string - ecrit une chaîne sur la sortie standar
 * @str: La chaîe a affiche
 * Si la chaîne est NULL, "(null)" est afficer
 * Return: le nombre de caractèresecrits
 */
int _write_string(char *str)
{
	if (str == NULL)
		str = "(null)";
	return (write(1, str, strlen(str)));
}
