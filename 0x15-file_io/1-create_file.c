#include "main.h"
/**
 * create_file - a function that creates a file
 * @filename: name of the file
 * @text_content: teext content
 * Return: 1 on success
 */
int create_file(const char *filename, char *text_content)
{
	int f;
	size_t text_len;
	ssize_t lenw;

	if (filename == NULL)
		return (-1);

	f = open(filename, O_WRONLY | O_CREAT, 0600);

	if (f == -1)
		return (-1);

	if (text_content != NULL)
	{
		text_len = strlen(text_content);
		lenw = write(f, text_content, text_len);

		if (lenw == -1)
		{
			close(f);
			return (-1);
		}
	}
	close(f);

	return (1);
}
