#include <stdio.h>

/**
 * main - Entry level
 *
 * Return: 0 (Successful)
 */

int main(void)
{
	int a;

	for (a = 0 ; a <= 9 ; a++)
	{
		if (a == 9)
			putchar(a + '0');
		else
		{
			putchar(a + '0');
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
