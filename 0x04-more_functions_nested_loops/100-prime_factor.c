#include "main.h"

/**
 * main - print the largest prime factor of the number
 *
 * Return: 0 successfully
 */
int main(void)
{
	long num = 612852475143, d;

	while (d < (num / 2))
	{
		if ((num % 2) == 0)
		{
			num /= 2;
			continue;
		}
		for (d = 3; d < (num / 2); d += 2)
		{
			if ((num % d) == 0)
				num /= d;
		}
	}
	printf("%ld\n", num);
	return (0);
}
