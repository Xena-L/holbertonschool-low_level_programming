#include "main.h"

/**
 * _puts_recursion - affiche une chaîne suivie d'un saut de ligne
 * @s: chaîne à afficher
 */
void _puts_recursion(char *s)
{
	if (*s == '\0') /* condition de fin */
	{
		_putchar('\n'); /* afficher le saut de ligne */
		return;
	}

	_putchar(*s);       /* afficher le caractère actuel */
	_puts_recursion(s + 1); /* appeler récursivement pour le reste de la chaîne */
}
