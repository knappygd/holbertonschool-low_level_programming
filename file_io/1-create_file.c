#include "main.h"
#include <string.h>

/**
 * create_file - a function that creates a file
 * @filename: file to use
 * @text_content - text to write to the file
 *
 * Return: 1 on success, else -1
 */
int create_file(const char *filename, char *text_content)
{
	int op, rd, wr;
	char *buffer;

	if (!filename)
		return (0);

	if (!text_content)
		text_content = "";

	op = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	write(op, buffer, strlen(text_content));

	close(op);
}
