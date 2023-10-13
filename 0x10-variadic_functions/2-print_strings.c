#include "variadic_functions.h"

/**
 * print_strings - function that prints strings
 * @n: no of strings
 * @separator: string to be printed bfore strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;

	va_list pointer_string;

	va_start(pointer_string, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(pointer_string, char *);

		if (str == NULL)
		{
			printf("nil");
		}
		else
		{
			printf("%s", str);
		}
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(pointer_string);
}
