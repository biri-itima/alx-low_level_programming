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
			if (c < 9)
			printf("%2d, ", x);

			else
				printf("%2d", x);
		}
		printf("\n");

	}
	printf("\n");
}
