#include "function_pointers.h"

/**
 * print_name - a function that prints out a name
 * @f: variables
 * @name: name to be printed
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
