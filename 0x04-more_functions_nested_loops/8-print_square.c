#include "main.h"
/**
 * print_square - print #
 *
 * @size: parameter
 */
void print_square(int size)
{
	int a;

	for (a = 0; a <= size; a++)
	{
		if (size > 0)
		{
			_putchar('#');
		}
		else if (size <= 0)
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
