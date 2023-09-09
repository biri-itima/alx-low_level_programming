#include <stdio.h>

/**
 * main - Entry level
 *
 * Return: 0 (Successful)
 */

int main(void)
{
	int a;
	int b;

	for (a = 0 ; a <= 9 ; a++)
	{
		for (b = a + 1 ; b <= 9 ; b++)
		{
			putchar('0' + a);
			putchar('0' + b);
			if (a != 8 || b != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
