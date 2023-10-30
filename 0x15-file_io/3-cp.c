#include "main.h"
#define BUFFER_SIZE 1024
/**
 * main - entry point for cp
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int f_from, f_to;
	char buffer[BUFFER_SIZE];
	ssize_t rd, wrt;
	const char *file_from = argv[1], *file_to = argv[2];

	if (argc != 3)
	{
		error_message(97, "Usage: cp file_from file_to\n");
	}
	f_from = open(file_from, O_RDONLY);
	if (f_from == -1)
	{
		error_message(98, "Error: Can't read from%s\n", f_from);
	}
	f_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (f_to == -1)
	{
		error_message(99, "Error: Can't write to %s\n", file_to);
	}
	while ((rd = read(f_from, buffer, BUFFER_SIZE)) > 0)
	{
		wrt = write(f_to, buffer, rd);
		if (wrt == -1)
		{
			error_message(99, "Error: Can't write to %s\n", file_to);
		}
	}
	if (rd == -1)
	{
		error_message(98, "Error: Can't read from %s\n", file_from);
	}
	if (close(f_from) == -1)
	{
		error_message(100, "Error: Can't close fd %d\n", f_from);
	}
	if (close(f_to) == -1)
	{
		error_message(100, "Error: Can't close fd %d\n", f_to);
	}
	return (0);
}
