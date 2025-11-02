#include "main.h"

/**
* leet - encode string into 1337
* @s: string
* Return: pointer to s
*/

char *leet(char *s)
{
int i = 0, j;
char letters[] = "aAeEoOtTlL";
char numbers[] = "4433007711";

while (s[i])
{
for (j = 0; letters[j]; j++)
{
if (s[i] == letters[j])
{
s[i] = numbers[j];
break;
}
}
i++;
}

return (s);
}
