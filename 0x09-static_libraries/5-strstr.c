#include "main.h"

/**
 * _strstr - find the first occurrence of substring
 * @haystack: parameter 1
 * @needle: parameter 2
 * Return: Null
*/
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *one = haystack;
		char *two = needle;

		while (*one == *two && *two != '\0')
		{
			one++;
			two++;
		}
		if (*two == '\0')
		{
			return (haystack);
		}
	}
	return (NULL);
}
