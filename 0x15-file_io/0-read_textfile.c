#include "main.h"
/**
 * read_textfile - It reads a text file and prints it to the
 * POSIX stdio
 * @filename: name of the file
 * @letters: number of letters it should read
 * Return: number of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	ssize_t lenr, lenw;
	char *buffer;

	if (filename == NULL)
		return (0);
	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(f);
		return (0);
	}
	lenr = read(f, buffer, letters);
	close(f);
	if (lenr == -1)
	{
		free(buffer);
		return (0);
	}
	lenw = write(STDOUT_FILENO, buffer, lenr);
	free(buffer);
	if (lenr != lenw)
		return (0);
	return (lenw);
}
