#include "main.h"

/**
 * print_rev - print the string in reverse
 *
 * @s: parameter
 */
void print_rev(char *s)
{
	int i;

	int num_string = 0;

	for (i = 0; s[i] != '\0'; i++)
		num_string++;
	for (i = num_string - 1 ; i >= 0 ; i--)
		_putchar(s[i]);
	_putchar('\n');
}
