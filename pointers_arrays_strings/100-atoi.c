#include "main.h"

/**
* _atoi - converts a string to an integer
* @s: pointer to string
*
* Return: integer value
*/

int _atoi(char *s)
{
int i = 0, sign = 1, num = 0;
int digit_found = 0;

while (s[i] != '\0')
{
if (s[i] == '-')
sign *= -1;
else if (s[i] >= '0' && s[i] <= '9')
{
digit_found = 1;
if (num > (2147483647 - (s[i] - '0')) / 10)
{
return (sign == 1 ? 2147483647 : -2147483648);
}
num = num * 10 + (s[i] - '0');
}
else if (digit_found)
{
break;
}
i++;
}
return (num *sign);
}
