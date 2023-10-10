#include "dog.h"

/**
 * init_dog - intialize struct to d
 * @d: parameter 1
 * @name: parameter 2
 * @age: parameter 3
 * @owner: parameter 4
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
