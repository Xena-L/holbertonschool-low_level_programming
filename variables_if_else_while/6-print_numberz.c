#include <stdio.h>

/**
* main - Entry point
*
* Description: Displays numbers from 0 to 9
* i'am use only putchar for two times
* no variables type char
*
* Return: Always 0 (Success)
*/

int main(void)
{
int x;

for (x = 48; x <= 57; x++)
putchar(x);

putchar('\n');

return (0);
}
