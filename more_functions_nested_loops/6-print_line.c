#include "main.h"

/**
* print_line - dessine une ligne droite dans le terminal
*
* @n: nombre de fois où le caractère '_' doit être imprimé
*
* Description: Cette fonction affiche une ligne horizontale composée
* du caractère '_' répété n fois. La ligne se termine toujours par
* un saut de ligne '\n'. Si n est inférieur ou égal à 0, la fonction
* n’affiche que le saut de ligne.
*/

void print_line(int n)
{
int l;

for (l = 0; l < n; l++)
{_putchar('_');
}
_putchar('\n');
}
