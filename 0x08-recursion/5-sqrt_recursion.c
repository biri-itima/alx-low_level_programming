#include "main.h"

/**
 * _sqrt_recursion - return the natural square root
 *
 * @n: parameter 1
 * @i: parameter 2
 * Return: successful
 */
int _sqrt(int n, int i);

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - calculate the square root here
 *
 * @n: parameter
 * @i: iterate parameter
 *
 * Return: natural sqrt
 */
int _sqrt(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	else if (i * i == n)
	{
		return (i);
	}
	return (_sqrt(n, i + 1));
}
