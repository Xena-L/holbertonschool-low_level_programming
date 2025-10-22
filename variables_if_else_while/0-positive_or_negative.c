#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main -Entry point
*
* Description: Ce programme assigne un nombre aléatoire à la variable 'n'
* chaque fois qu'il est exécuté,
* puis affiche si ce nombre est postifif, negative ou nul
*
* Return: Always 0 (Success)
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else
{
printf("%d is negative\n", n);
}

return (0);
}
