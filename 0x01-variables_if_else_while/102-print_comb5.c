#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: 0 (Successful)
 */
int main(void)
{
	int a;
	int b;
	int a1;
	int a2;
	int b1;
	int b2;

	for (a = 0; a <= 98; a++)
	{
		for (b = a + 1; b <= 99; b++)
		{
			a1 = a / 10;
			a2 = a % 10;
			b1 = b / 10;
			b2 = b % 10;

			putchar(a1 + '0');
			putchar(a2 + '0');
			putchar(' ');
			putchar(b1 + '0');
			putchar(b2 + '0');

			if (a == 98 && b == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}

