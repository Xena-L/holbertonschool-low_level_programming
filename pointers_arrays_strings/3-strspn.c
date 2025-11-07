#include "main.h"

/**
* _strspn - obtient la longueur d’un préfixe composé uniquement
*           de caractères présents dans une autre chaîne
* @s: la chaîne principale à analyser
* @accept: la chaîne contenant les caractères acceptés
*
* Return: le nombre d’octets initiaux dans s
*         qui ne contiennent que des caractères de accept
*/

unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j;
unsigned int count = 0;
int match;

for (i = 0; s[i] != '\0'; i++)
{
match = 0;
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
match = 1;
break;
}
}
if (match == 0)
break;
count++;
}

return (count);
}
