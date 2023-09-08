#include <stdio.h>

/**
 * main - Entry level
 *
 * Return: 0 (Successful)
 */
int main(void)
{
	char excq_e;

	for (excq_e = 'a' ; excq_e <= 'z'; excq_e++)
	{
		if (excq_e != 'e' && excq_e != 'q')
		{
			putchar(excq_e);
		}
	}
	putchar('\n');
	return (0);
}
