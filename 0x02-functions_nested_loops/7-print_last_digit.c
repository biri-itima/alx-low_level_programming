#include "main.h"

/**
 * print_last_digit - Entry point
 *
 * @l: this is the function parameter
 *
 * Return: last number successful
 */

int print_last_digit(int l)
{
	int a;

	a = l % 10;
	if (a < 0)
		a = -a;
	_putchar(a + '0');
	return (a);
}
