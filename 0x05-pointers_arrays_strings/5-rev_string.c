#include "main.h"

/**
 * rev_string - reverse the string by swaping
 *
 * @s: parameter
 */
void rev_string(char *s)
{
	int i;
	char a;
	int counter = 0;

	for (i = 0; s[i] != '\0'; i++)
		counter++;
	for (i = 0; i < counter / 2; i++)
	{
		a = s[i];
		s[i] = s[counter - 1 - i];
		s[counter - 1 - i] = a;
	}
}
