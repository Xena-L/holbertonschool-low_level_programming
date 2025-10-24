#include <stdio.h>

/**
* main - Entry point
*
* Description: Displays lowercase alphabet in reverse,
* followed by new line
* i'am only use putchar and two times
*
* Return: Always 0 (Success)
*/

int main(void)
{
int x;

for (x = 122; x >= 92; x--)
putchar(x);

putchar('\n');

return (0);
}
