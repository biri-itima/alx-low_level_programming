#include "main.h"

/**
 * leet - replace letters
 * @str: parameter
 * Return: str
 */

char *leet(char *str)
{
	char replace[] = "4307143071";
	/*They are doubled because of both cases as specified*/

	int i;
	int j;
	char letters[] = "aeotlAEOTL";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (str[i] == letters[j])
			{
				str[i] = replace[j];
				break;
			}
		}
	}
	return (str);
}
