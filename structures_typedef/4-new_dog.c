#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
* new_dog - creates a new dog
* @name: dog's name
* @age: dog's age
* @owner: dog's owner
*
* Return: pointer to the new dog, or NULL if it fails
*/

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *d;
char *name_copy, *owner_copy;
size_t len_name, len_owner;

d = malloc(sizeof(dog_t));
if (d == NULL)
return (NULL);

if (name != NULL)
{
len_name = strlen(name) + 1;
name_copy = malloc(len_name);
if (name_copy == NULL)
{
free(d);
return (NULL);
}
strcpy(name_copy, name);
}
else
name_copy = NULL;

if (owner != NULL)
{
len_owner = strlen(owner) + 1;
owner_copy = malloc(len_owner);
if (owner_copy == NULL)
{
free(name_copy);
free(d);
return (NULL);
}
strcpy(owner_copy, owner);
}
else
owner_copy = NULL;

d->name = name_copy;
d->age = age;
d->owner = owner_copy;

return (d);
}
