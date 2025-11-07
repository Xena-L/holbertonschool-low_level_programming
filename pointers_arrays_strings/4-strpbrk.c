#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - cherche le premier caractère dans s
 * qui correspond à un caractère de accept
 * @s: la chaîne dans laquelle chercher
 * @accept: la chaîne contenant les caractères à rechercher
 *
 * Return: un pointeur vers le premier caractère correspondant dans s,
 * ou NULL si aucun caractère n’est trouvé
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}

	return (NULL);
}
