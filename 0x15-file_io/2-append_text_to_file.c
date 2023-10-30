#include "main.h"

/**
 * append_text_to_file - a function that appends text
 * at the end of a file
 * @filename: filename
 * @text_content: content of file
 * Return: 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f;
	size_t text_len;
	ssize_t lenw;

	if (filename == NULL)
		return (-1);
	if (access(filename, F_OK) == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		return (1);
	}

	f = open(filename, O_WRONLY | O_APPEND);

	if (f == -1)
	{
		return (-1);
	}
	text_len = strlen(text_content);
	lenw = write(f, text_content, text_len);

	if (lenw == -1)
	{
		close(f);
		return (-1);
	}

	close(f);
	return (1);
}
