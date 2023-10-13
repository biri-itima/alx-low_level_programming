#include "function_pointers.h"

/**
 * print_name - a function that prints out a name
 * @name: name to be printed
 * @f: variable
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
