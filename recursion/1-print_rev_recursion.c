#include "main.h"

/**
 * _print_rev_recursion - affiche une chaîne de caractères en ordre inverse
 * @s: chaîne à afficher
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;

	_print_rev_recursion(s + 1);
	_putchar(*s);
}
