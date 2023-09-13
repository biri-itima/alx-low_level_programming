#include <stdio.h>
#include "main.h"

/**
 * main - Finding the multiples
 *
 * Return: 0 successful
 */
int main(void)
{
	int a;

	for (a = 0; a < 1024; a++)
	{
		if (a % 3 == 0 || a % 5 == 0)
		{
			printf("%d", a);
			printf("\n");
		}
	}
	printf("\n");
	return (0);
}
