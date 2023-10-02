#include "main.h"

/**
 * _memcpy - copy sec to dest
 *
 * @src: Sorce code
 * @dest: copying to
 * @n: bytes
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
