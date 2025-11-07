#include "main.h"
#include <stddef.h> /* pour NULL */

/**
* _strchr - localise un caractère dans une chaîne
* @s: la chaîne dans laquelle chercher
* @c: le caractère à chercher
*
* Return: un pointeur vers la première occurrence de c dans s,
* ou NULL si le caractère n'est pas trouvé
*/

char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
return (s);
s++;
}

if (c == '\0')
return (s);

return (NULL);
}
