#include <stdio.h>

/**
 * main - Entry level
 *
 * Return: 0 (Successful)
 */
int main(void)
{
	char l_caps;
	char A_caps;

	for (l_caps = 'a' ; l_caps <= 'z' ; l_caps++)
		putchar(l_caps);
	for (A_caps = 'A' ; A_caps <= 'Z' ; A_caps++)
		putchar(A_caps);
	putchar('\n');
	return (0);
}
