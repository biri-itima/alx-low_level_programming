#include "dog.h"

/**
 * free_dog - a function that frees dog
 * @d: parameter 1
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
