#include <stdio.h>

/**
* main - Entry point
*
* Description: Write a program that prints the alphabet in lowercase.
*
* Return: Always 0 (Success)
*/

int main(void)
{
char x;

for (x = 'a'; x = 'z'; x++)

if (x != 'e' && x != 'q')
{
putchar(x);
}
{
putchar('\n');
}
return (0);
}
