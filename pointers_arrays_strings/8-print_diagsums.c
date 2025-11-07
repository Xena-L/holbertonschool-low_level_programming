#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - calcule et affiche la somme des deux diagonales
 *                 d'une matrice carrée d'entiers
 * @a: pointeur vers le début de la matrice (cast depuis int[][])
 * @size: taille de la matrice (nombre de lignes ou colonnes)
 *
 * Description: On considère que la matrice est stockée en mémoire
 * ligne par ligne, comme en C. La diagonale principale va de
 * a[0][0] à a[size-1][size-1], et la diagonale secondaire va de
 * a[0][size-1] à a[size-1][0].
 */
void print_diagsums(int *a, int size)
{
	int i;
	long sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += *(a + i * size + i);
		sum2 += *(a + i * size + (size - 1 - i));
	}

	printf("%ld, %ld\n", sum1, sum2);
}
