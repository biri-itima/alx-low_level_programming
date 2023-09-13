#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 */
void print_alphabet_x10(void)
{
	int num;

	char a;

	for (num = 0; num <= 10; num++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
	printf("\n");
}

