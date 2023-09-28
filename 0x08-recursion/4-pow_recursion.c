#include "main.h"

/**
 * _pow_recursion - find x raised to the power of y
 *
 * @x: parameter 1
 * @y: parameter 2
 *
 * Return: the value of x raised to y
 */
int _pow_recursion(int x, int y)
{
	long int result;

	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
		return (result = (x * _pow_recursion(x, y - 1)));
}

