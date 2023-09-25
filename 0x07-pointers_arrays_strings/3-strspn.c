#include "main.h"

/**
 * _strspn - get the length of the prefix substring
 * @s: parameter
 * @accept: char parameter
 * Return: i
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, n, counter, checker;

	counter = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		checker = 0;

		for (n = 0; accept[n] != '\0'; n++)
		{
			if (accept[n] == s[i])
			{
				counter++;
				checker = 1;
			}
		}
		if (checker == 0)
			break;
	}
	return (counter);
}
