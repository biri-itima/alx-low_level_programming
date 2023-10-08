#include "main.h"

/**
 * string_nconcat - concatenate n bytes of s2 to s1
 * @s1: parameter 1
 * @s2: parameter 2
 * @n: number of bytes of s2
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_len = 0;
	unsigned int s2_len = 0;
	char *ptr;
	unsigned int i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		s1_len++;
	for (i = 0; s1[i] != '\0'; i++)
		s2_len++;
	ptr = malloc(sizeof(char) * (s1_len + n) + 1);

	if (ptr == NULL)
		return (NULL);
	if (n >= s2_len)
	{
		for (i = 0; s1[i] != '\0'; i++)
			ptr[i] = s1[i];
		for (i = 0; s2[i] != '\0'; i++)
			ptr[s1_len + i] = s2[i];
		ptr[s1_len + i] = '\0';
	}
	else if (n < s2_len)
	{
		for (i = 0; s1[i] != '\0'; i++)
			ptr[i] = s1[i];
		for (i = 0; i < n; i++)
			ptr[s1_len + i] = s2[i];
		ptr[s1_len + i] = '\0';
	}
	return (ptr);
}
