#include <stdio.h>

/**
* main - Entry point
*
* Description: Displays a program all rhe numbers of base 16 in lowercasa,
* followed by new line.
* i'am only use putchar three times.
*
* Return: Always 0 (Success)
*/

int main(void)
{
int x;
int z;

for (x = 0 ; x <= 9; x++)
putchar(x +'0');
for (z = 'a' ; z <= 'f'; z++)
putchar(z);

putchar('\n');

return (0);
}
