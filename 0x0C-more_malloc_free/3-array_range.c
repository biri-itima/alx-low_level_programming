#include "main.h"

/**
 * array_range - create an array of integar
 * @min: parameter 1
 * @max: parameter 2
 * Return: Null if failed
 */
int *array_range(int min, int max)
{
	int i, *result, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	result = malloc(sizeof(int) * size);
	if (result == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
	{
		result[i] = min++;
	}
	return (result);
}
