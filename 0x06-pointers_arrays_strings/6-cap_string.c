#include "main.h"

/**
 * cap_string - Capitalize each word
 *
 * @str: parameter
 * Return: str
 */

char *cap_string(char *str)
{
	char sep[] = " \t\n,;.!?\"(){}";

	int i;

	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] = str[0] - ('a' - 'A');
	}

	for (i = 1; str[i] != '\0'; i++)
	{
		int is_sep = 0;
		int j;

		for (j = 0; sep[j] != '\0'; j++)
		{
			if (str[i] == sep[j])
			{
				is_sep = 1;
			}
		}
		if (is_sep)
		{
			i++;
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - ('a' - 'A');
			}
		}
		else
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
			{
				str[i] = str[i] + ('a' - 'A');
			}
		}
	}
	return (str);
}

