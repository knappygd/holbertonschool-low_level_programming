#include "main.h"
#include <stddef.h>

/**
 * read_textfile - reads a textfile and prints it
 * @filename: file to rpint
 * @letters: number of letters it should read and print
 *
 * Return: number of letter it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t open, read, write;
	char *buflets;
	
	if (!filename)
		return (0);

	buflets = malloc(sizeof(letters));
	if (!buflets)
		return (0);

	open = open(filename, O_RDONLY);
	if (open == -1)
	{
		free(buflets);
		return (0);
	}
	read = read(open, buflets, letters);
	if (read == -1)
	{
		free(buflets);
		return (0);
	}
	write = write(read, &buflets, letters);
	if (write == -1)
	{
		free(buflets);
		return (0);
	}

	close(open);
	free(buflets);

	return (write);
}
