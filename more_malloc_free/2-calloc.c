#include "main.h"
#include <stdlib.h>

/**
* _calloc - allocates memory for an array, initializes it to 0
* @nmemb: number of elements
* @size: size in bytes of each element
*
* Return: pointer to allocated memory initialized to 0,
*         or NULL if nmemb or size is 0 or if malloc fails
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
size_t total;
char *mem;
size_t i;
if (nmemb == 0 || size == 0)
return (NULL);

total = (size_t)nmemb * (size_t)size;
mem = malloc(total);
if (mem == NULL)
return (NULL);

for (i = 0; i < total; i++)
mem[i] = 0;

return ((void *)mem);
}
