#include <stdio.h>

/**
 * main - Entry Level
 *
 * Return: 0 is Successful
 */

int main(void)
{
	int a;
	int b;
	int c;
	int d;

	a = 0;
	while (a < 1000)
	{
		b = a / 100;
		c = (a / 10) % 10;
		d = a % 100;
		if (b < c && c < d)
		{
			putchar(d + '0');
			putchar(c + '0');
			putchar(b + '0');
			if (a < 789)
			{
				putchar(',');
				putchar(' ');
			}
		}
		a++;
	}
	putchar('\n');
	return (0);
}
