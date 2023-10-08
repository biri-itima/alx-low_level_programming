#include "main.h"

/**
 * _calloc - allocate mem for an array
 * @nmemb: parameter 1
 * @size: parameter 2
 * Return: ptr
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	size_t total_size;
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	total_size = nmemb * size;

	ptr = malloc(total_size);

	if (ptr == NULL)
		return (NULL);
	memset(ptr, 0, total_size);

	return (ptr);
}
