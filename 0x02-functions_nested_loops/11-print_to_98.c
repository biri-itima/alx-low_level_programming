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

	for (i = n; i <= 98; i++)
	{
		if (n < 0)
			printf("%d, ", i);
		else if (n > 0)
		{
			for (i = n; i <= 98; i++)
			printf("%d, ", i);
		}
	}
}
