#include "main.h"

/**
 * str_concat - concatenate two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer
 */

char *str_concat(char *s1, char *s2)
{
	size_t len_s1;
	size_t len_s2;
	size_t total_len;
	char *cat_arr;

	len_s1 = strlen(s1);
	len_s2 = strlen(s2);
	total_len = len_s1 + len_s2 + 1;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	cat_arr = (char *)malloc(total_len);

	if (cat_arr == NULL)
		return (NULL);
	strcpy(cat_arr, s1);
	strcat(cat_arr, s2);

	return (cat_arr);
}
