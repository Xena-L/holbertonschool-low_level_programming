#include "main.h"

/**
 * _memset - Remplit une zone mémoire avec une constante.
 * @s: pointeur vers la zone mémoire à remplir
 * @b: la valeur (octet) à copier
 * @n: le nombre d'octets à remplir
 *
 * Return: un pointeur vers la zone mémoire s
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
s[i] = b;
}

return (s);
}
