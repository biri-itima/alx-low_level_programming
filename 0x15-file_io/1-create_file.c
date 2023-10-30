#include "main.h"
/**
 * create_file - a function that creates a file
 * @filename: name of the file
 * @text_content: teext content
 * Return: 1 on success
 */
int create_file(const char *filename, char *text_content)
{
	int f, text_len, rdwr;

	if (!filename)
		return (-1);

	f = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (f == -1)
		return (-1);
	if (!text_content)
		text_content = "";
	for (text_len = 0; text_content[text_len]; text_len++)
		;
	rdwr = write(f, text_content, text_len);

	if (rdwr == -1)
		return (-1);
	close(f);
	return (1);
}
