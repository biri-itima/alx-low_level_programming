#include "main.h"
/**
 * _strchr - locate character in string
 *
 * @s: Sting parameter
 * @c: character to locate
 * Return: Null
 */

char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (NULL);
}
