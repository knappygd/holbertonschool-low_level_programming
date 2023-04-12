#include "main.h"

/**
 * read_textfile - reads a textfile and prints it
 * @filename: file to rpint
 * @letters: number of letters it should read and print
 *
 * Return: number of letter it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op, rd, wr;
	char *buflets;
	
	if (!filename)
		return (0);

	buflets = malloc(sizeof(char) * letters);
	if (!buflets)
		return (0);

	op = open(filename, O_RDONLY);
	if (op == -1)
	{
		free(buflets);
		return (0);
	}
	rd = read(op, buflets, letters);
	if (rd == -1)
	{
		free(buflets);
		return (0);
	}
	wr = write(rd, &buflets, letters);
	if (wr == -1)
	{
		free(buflets);
		return (0);
	}

	close(op);
	free(buflets);

	return (wr);
}
