#include "main.h"

/**
* print_numbers - imprime les chiffres de 0 à 9 suivis d’un saut de ligne
*
* Description: Cette fonction affiche les chiffres de 0 à 9 en utilisant
* uniquement la fonction _putchar deux fois au total
* Elle ne prend aucun argument et ne retourne rien.
*/

void print_numbers(void)
{
char x;

for (x = 48 ; x <= 57; x++)
_putchar(x);

_putchar('\n');
}
