#include "main.h"

/**
* print_triangle - Prints a right-aligned triangle using the character '#'
* @size: The size of the triangle
*
* Description: If size is 0 or less, only a newline is printed.
* Each row of the triangle has one more '#' than the previous row.
* The triangle is right-aligned.
*/

void print_triangle(int size)
{
int i, j;

if (size <= 0)
{
_putchar('\n');
return;
}

for (i = 1; i <= size; i++)
{
/* Print spaces before the '#' */
for (j = 1; j <= size - i; j++)
_putchar(' ');

/* Print the '#' characters */
for (j = 1; j <= i; j++)
_putchar('#');

_putchar('\n');
}
}
