#include "main.h"

/**
 * swap_int - Swap integar values
 * @a: parameter 1
 * @b: Parameter 2
 * Return: Void
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
