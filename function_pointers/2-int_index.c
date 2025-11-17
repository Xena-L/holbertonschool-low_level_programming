#include "function_pointers.h"
#include <stdio.h>

/**
* int_index - searches for an integer in an array using a comparison function
* @array: the array to search
* @size: number of elements in the array
* @cmp: pointer to comparison function
*
* Return: index of the first element where cmp != 0, -1 if not found
*/

int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (!array || !cmp || size <= 0)
return (-1);

for (i = 0; i < size; i++)

if (cmp(array[i]))
return (i);

return (-1);
}
