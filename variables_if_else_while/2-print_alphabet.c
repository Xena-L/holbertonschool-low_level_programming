#include <stdio.h>

/**
* main - ('a';'z')
*
* Description: i use two loop for and putchar in order to display;
*
* Return: Always 0 (Success)
*/

int main(void)
{
char x;

for (x = 'a'; x <= 'z'; x++)
putchar(x);

putchar('\n');

return (0);
}
