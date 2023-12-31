#include "main.h"

/**
 * _strncat - concatenate strings n most times
 * @dest: Destination
 * @src: source
 * @n: byte
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len = strlen(dest);
	int i;

	for (i = 0; i < n && *src != '\0'; i++)
	{
		dest[dest_len + i] = *src;
		src++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}
