#include "main.h"

/**
 * is_palindrome - check if it is a palindrome
 *
 * @s: parameter
 *
 * Return: 1
 */
int is_palindrome(char *s)
{
	int length = strlen(s);
	int i, j;

	for (i = 0, j = length - 1; i < j; i++, j--)
	{
		if (s[i] != s[j])
		{
			return (0);
		}
	}
	return (1);
}
