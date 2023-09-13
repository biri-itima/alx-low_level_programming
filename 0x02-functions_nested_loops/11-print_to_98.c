#include "main.h"

/**
 * print_to_98 - Entry point to print all normal numbers from point n
 *
 * @n: the value for starting the counter
 *
 */
void print_to_98(int n)
{
	int i;

	if (n >= 0 && n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			printf(", ");
			if (i == 98)
				printf("%d", i);
		}
		printf("\n");
	}
	else if (n < 0)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			printf(", ");
			if (i == 98)
				printf("%d", i);
		}
		printf("\n");
	}
	else if (n > 98)
	{
		for (i = n; i > 98; i--)
		{
			printf("%d", i);
			printf(", ");
			if (i == 98)
				printf("%d", i);
		}
		printf("\n");
	}
}
