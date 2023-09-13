#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 always
 */
int main(void)
{
	unsigned int f1 = 1;
	unsigned int f2 = 2;
	int lim;
	unsigned int fn;

	printf("%u, ", f1);

	for (lim = 3; lim <= 99; lim++)
	{
		printf("%u", f2);
		fn = f1 + f2;
		f1 = f2;
		f2 = fn;
		if (lim < 98)
			printf(", ");
		else
			printf("\n");
	}
	return (0);
}
