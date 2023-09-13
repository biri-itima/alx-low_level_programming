#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 always
 */

int main(void)
{
	int lim = 4000000;
	int f1 = 1;
	int f2 = 2;
	int fn;
	int sum = 2;

	while (fn <= lim)
	{
		fn = f1 + f2;
		if (fn % 2 == 0)
			sum = sum + fn;
		f1 = f2;
		f2 = fn;
	}
	printf("%d\n", sum);
	return (0);
}
