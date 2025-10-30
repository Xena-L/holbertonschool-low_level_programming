#include "main.h"

/**
* more_numbers - imprime 10 fois les nombres de 0 à 14,
* suivis d’un saut de ligne
*
* Description: Cette fonction affiche dix lignes
* de nombres allant de 0 à 14.
* Ne prend aucun argument et ne retourne rien.
*/

void more_numbers(void)
{
int x, l;

for (x = 0 ; x >= 10 ; x++)
{
for (l = 0; l < 10; l++)
{
if (l / 10)
_putchar((l / 10) + '0');
_putchar((l % 10) + '0');
}
_putchar('\n');
}
}
