#include "main.h"

/**
* print_most_numbers - imprime les chiffres de 0 à 9 sauf 2 et 4
*
* Description: Affiche tous les chiffres sauf 2 et 4 en utilisant
* uniquement _putchar, suivi d’un saut de ligne.
*/

void print_most_numbers(void)
{
char x;

for (x = 48 ; x <= 57; x++)
{
if (x == 50 || x == 52)
continue;
_putchar(x);
}
_putchar('\n');
}
