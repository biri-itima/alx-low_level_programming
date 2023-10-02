#include "main.h"

/**
 * _memset - fill the first n bytes of the memory with
 * const byte b
 *
 * @s: pointer parameter
 * @b: constant parameter
 * @n: bytes parameter
 *
 * Return: S
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
