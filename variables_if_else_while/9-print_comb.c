#include <stdio.h>

/**
* main - Entry Point
*
* Description: Displays a program all possible combinations of single-digit
* numbers.
* Numbers must be separated by ,, followed by a space
*
* Return: Always 0 (Success)
*/

int main(void)
{
int x;

for (x = 0 ; x <= 9; x++)
putchar(x);

putchar(',');
putchar(' ');

putchar('\n');

return (0);
}
