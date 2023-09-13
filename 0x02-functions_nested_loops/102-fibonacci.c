#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 always
 */
int main(void)
{
	int n = 51, i;

	long int f1 = 1, f2 = 2, fn;

	printf("%ld, ", f1);

	for (i = 3; i <= n; i++)
	{
		printf("%ld", f2);
		fn = f1 + f2;
		f1 = f2;
		f2 = fn;
		if (i != n)
		{
			printf(", ");
		}
		else
			printf("\n");
	}
	return (0);
}
