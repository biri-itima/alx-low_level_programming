#include <stdio.h>

/**
 * main - Entry level
 *
 * Return: 0 (Successful)
 */
int main(void)
{
	int a;

	for (a = 0 ; a <= 15 ; a++)
	{
		if (a < 10)
		{
			putchar('0' + a);
		}
		else
		{
			putchar('A' + (a - 10));
		}

	}
	putchar('\n');
	return (0);
}
