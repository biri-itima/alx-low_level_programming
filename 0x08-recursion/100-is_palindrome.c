#include "main.h"

/**
 * is_palindrome_rec - check if it is a palindrome
 *
 * @s: parameter
 * @str: begining char
 * @end: end char
 *
 * Return: 1
 */
int is_palindrome_rec(char *s, int str, int end)
{
	if (str >= end)
	{
		return (1);
	}

	else if (s[str] != s[end])
	{
		return (0);
	}

	return (is_palindrome_rec(s, str + 1, end - 1));
}

/**
 * is_palindrome - check if it is a palindrome
 *
 * @s: parameter
 *
 * Return: 1
 */

int is_palindrome(char *s)
{
	int l = strlen(s);

	return (is_palindrome_rec(s, 0, l - 1));
}
