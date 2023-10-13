#include "variadic_functions.h"

/**
 * print_numbers - a function that prints numbers
 * @n: no of integars
 * @separator: string to be printed between number
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, arr;

	va_list pointer;

	va_start(pointer, n);

	for (i = 0; i < n; i++)
	{
		arr = va_arg(pointer, const unsigned int);
		printf("%d", arr);

		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
		printf("\n");
		va_end(pointer);
}
