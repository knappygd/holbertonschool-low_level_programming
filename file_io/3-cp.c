#include "main.h"
#include <stdio.h>

void close_files(int fdesc);

/**
 * close_files - simple aux function to close open files
 * @fdesc: file to close
 */
void close_files(int fdesc)
{
	int cl = close(fdesc);

	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdesc);
		exit(100);
	}
}
/**
 * main - copy the contents of one file into another
 * @argc: number of arguments passed
 * @argv: an array of the arguments passed
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int from, to, rd, wr;
	char *buffer;
	char *file_from = argv[1];
	char *file_to = argv[2];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = malloc(sizeof(char) * 1024);
	if (!buffer)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}

	from = open(file_from, O_RDONLY);
	if (from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	rd = read(from, buffer, 1024);
	if (rd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", file_to);
		exit(99);
	}

	wr = write(to, buffer, rd);
	if (wr == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}

	free(buffer);
	close_files(from);
	close_files(to);

	return (0);
}
