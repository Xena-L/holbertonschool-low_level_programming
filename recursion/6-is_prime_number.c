#include "main.h"

/**
* _is_prime - helper récursif pour vérifier si un nombre est premier
* @n: nombre à tester
* @i: diviseur courant
*
* Return: 1 si premier, 0 sinon
*/

int _is_prime(int n, int i)
{
	if (n < 2)
		return (0);
	if (i * i > n)
		return (1);
	if ((n % i) == 0)
		return (0);
	return (_is_prime(n, i + 1));
}

/**
* is_prime_number - retourne 1 si n est premier, 0 sinon
* @n: nombre à tester
*
* Return: 1 si premier, 0 sinon
*/

int is_prime_number(int n)
{
	return (_is_prime(n, 2));
}
