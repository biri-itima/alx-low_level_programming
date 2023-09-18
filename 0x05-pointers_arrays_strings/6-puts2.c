#include "main.h"
/**
 * puts2 - prints even number of the string
 *
 * @str: the string
 */
void puts2(char *str)
{
	int i;
	int counter = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		counter++;
	if ((i % 2) == 0)
	{
		_putchar(str[i]);
	}
	}
	_putchar('\n');
}
