#include "dog.h"
#include <stddef.h>

/**
* init_dog - initializes a variable of type struct dog
* @d: pointer to struct dog to initialize
* @name: dog's name
* @age: dog's age
* @owner: dog's owner
*
* Description: Initializes the fields of the struct dog pointed to by d.
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
return;

d->name = name;
d->age = age;
d->owner = owner;
}
