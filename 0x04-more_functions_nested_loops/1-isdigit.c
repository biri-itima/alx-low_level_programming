#include "main.h"

/**
 * _isdigit - check if it is a digit
 * @c: parameter to be checked
 * Return: 1 or 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
