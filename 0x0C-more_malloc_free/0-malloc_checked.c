#include "main.h"

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: parameter 1
 * Return: Pointer ptr
 */

void *malloc_checked(unsigned int b)
{
	char *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
