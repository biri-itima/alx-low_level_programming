#include "main.h"

/**
 * times_table - Entry point for 9 times table
 *
 */

void times_table(void)
{
	int r, c, x;

	for (r = 0; r < 10; r++)
	{
		for (c = 0; c < 10; c++)
		{
			x = r * c;
			if (r < 10 && c < 1)
			{
			printf("%d", x);
			}

			else
				printf("%2d", x);
			if (c < 9)
				printf(", ");
		}
		printf("\n");

	}
}
