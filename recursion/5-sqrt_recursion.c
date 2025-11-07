#include "main.h"

/**
 * _sqrt_helper - fonction récursive pour trouver la racine carrée
 * @n: nombre dont on cherche la racine
 * @guess: valeur testée comme racine
 *
 * Return: racine carrée si elle existe, -1 sinon
 */

int _sqrt_helper(int n, int guess)
{
	if ((guess * guess) == n)
		return (guess);
	if ((guess * guess) > n)
		return (-1);
	return (_sqrt_helper(n, (guess + 1)));
}

/**
 * _sqrt_recursion - retourne la racine carrée naturelle de n
 * @n: nombre dont on cherche la racine
 *
 * Return: racine carrée si elle existe, -1 sinon
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_sqrt_helper(n, 0));
}
