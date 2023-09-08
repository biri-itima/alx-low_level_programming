#include <stdio.h>

/**
 * main - Entry level
 *
 * Return: 0 (Successful)
 */
int main(void)
{
	char a;

	for (a = 'z' ; a >= 'a' ; a--)
		putchar(a);
	putchar('\n');
	return (0);
}
