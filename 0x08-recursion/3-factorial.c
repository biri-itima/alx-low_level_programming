#include "main.h"

/**
 * factorial - find the factorial n
 *
 * @n: parameter 1
 *
 * Return: successful
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
		return (n * factorial(n - 1));
}
