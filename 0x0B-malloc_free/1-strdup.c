#include "main.h"

/**
 * _strdup - duplicate string
 * @str: string
 *
 * Return: pointer to the allocated space
 */

char *_strdup(char *str)
{
	int i;
	char *arr;

	if (str == NULL)
		return (NULL);

	arr = (char *)malloc(sizeof(char) * (strlen(str) + 1));

	if (arr == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		arr[i] = str[i];
	}
	return (arr);
}

