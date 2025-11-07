#include "main.h"

/**
 * factorial - calcule le factoriel d’un nombre
 * @n: nombre dont on veut le factoriel
 *
 * Return: factoriel de n, ou -1 si n < 0
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
