#include "main.h"

/**
 * _realloc - reallocates memory
 * @ptr: parameter 1
 * @old_size: parameter 2
 * @new_size: parameter 3
 * Return: pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *pt_r;
	char *old_ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
		return (malloc(new_size));
	pt_r = malloc(new_size);
	if (!pt_r)
		return (NULL);
	old_ptr = ptr;
	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			pt_r[i] = old_ptr[i];
	}
	if (new_size > old_size)
	{
		for (i = 0; i < new_size; i++)
			pt_r[i] = old_ptr[i];
	}
	free(ptr);
	return (pt_r);
}

