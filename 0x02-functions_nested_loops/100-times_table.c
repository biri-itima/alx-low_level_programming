#include "main.h"

/**
 * print_times_table - Multiplication times table
 *
 * @n: multiplier
 *
 */
void print_times_table(int n)
{
	int r, c, x;

	if (n <= 15)
	{
		for (r = 0; r <= n; r++)
		{
			for (c = 0; c <= n; c++)
			{
				x = r * c;
				if (r < 16 && c < 1)
				{
					printf("%d", x);
				}
				else
					printf("%3d", x);
				if (c < n)
					printf(", ");
			}
			printf("\n");
		}
		printf("\n");
	}
	else if (n > 15)
		printf("\n");
}
