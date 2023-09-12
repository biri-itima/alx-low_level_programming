#include <stdio.h>

/**
 * main - Entry point for code
 *
 * Return: Successful (0)
 */

int main(void)
{
	char a[] = "_putchar";

	for (int i = 0; a[i]; i++)
	{
		putchar(a[i]);
	}
	putchar('\n');
	return (0);
}
