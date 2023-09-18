#include "main.h"

/**
 * puts_half - print half of the string
 *
 * @str: parameter
 */
void puts_half(char *str)
{
	int i, n, counter = 0;

	for (i = 0; str[i] != '\0'; i++)
		counter++;
	n = (counter - 1) / 2;
	for (i = n + 1 ; str[i] != '\0' ; i++)
		_putchar(str[i]);
	_putchar('\n');
}
