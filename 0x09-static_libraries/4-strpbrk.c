#include "main.h"

/**
 * _strpbrk - Entry
 * @s: Input
 * @accept: parameter
 * Return: Null if not successful
 */
char *_strpbrk(char *s, char *accept)
{
	int i, n;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (s[i] == accept[n])
				return (s + i);
		}
	}
	return (NULL);
}
