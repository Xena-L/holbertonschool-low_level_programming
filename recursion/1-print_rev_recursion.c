#include "main.h"

/**
 * _strlen_recursion - retourne la longueur d'une chaîne de caractères
 * @s: chaîne à mesurer
 *
 * Return: longueur de la chaîne
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')  /* condition de fin */
		return 0;

	return 1 + _strlen_recursion(s + 1); /* compte 1 + longueur du reste */
}
