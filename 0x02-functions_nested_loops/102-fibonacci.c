#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 always
 */
int main(void)
{
	int n = 50, i;

	long int f1 = 1, f2 = 2, fn;

	for (i = 3; i <= n; i++)
	{
		fn = f1 + f2;
		printf("%ld, %ld, %ld", f1, f2, fn);

		if (i < n)
		{
			printf(", ");
		}
		else
			printf("\n");
		f1 = f2;
		f2 = fn;
	}
	return (0);
}
