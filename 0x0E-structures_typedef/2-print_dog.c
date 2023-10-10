#include "dog.h"
#include <math.h>

/**
 * print_dog - print the structure
 * @d: parameter
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
	}
	else
	{
		printf("Name: %s\n", d->name != NULL ? d->name : "(nil)");
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner != NULL ? d->owner : "(nil)");
	}
}
