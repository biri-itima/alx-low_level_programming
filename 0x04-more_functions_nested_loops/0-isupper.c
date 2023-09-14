#include "main.h"

/**
 * _isupper - check if it is upper case letter
 * @c: parameter
 * Return: 1 or 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else if (c >= 'a' && c <= 'z')
	{

		return (0);
	}
	return (0);
}
