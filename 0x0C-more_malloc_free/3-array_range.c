#include "main.h"

/**
 * array_range - create an array of integar
 * @min: parameter 1
 * @max: parameter 2
 * Return: Null if failed
 */
int *array_range(int min, int max)
{
	int i, *result;

	if (min > max)
		return (NULL);
	result = malloc((max - min) * sizeof(int));
	if (result == NULL)
		return (NULL);
	for (i = 0; i <= max; i++)
	{
		result[i] = min + i;
	}
	return (result);
}
