#include "main.h"

/**
 * _strlen - count the number of characters in the string
 *
 * @s: parameter
 * Return:counter successful
 */
int _strlen(char *s)
{
	int i;

	int counter = 0;

	for (i = 0; s[i] != '\0'; i++)
		counter++;
	return (counter);
}
