#include "function_pointers.h"

/**
 * int_index - function that searches for an integar
 * @array: array result
 * @size: size of array
 * @cmp: ptr
 * Return: -1 if the size is negative
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array == NULL || cmp == NULL)
		return (-1);
	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]) != 0)
			return (a);
	}
	return (-1);
}
