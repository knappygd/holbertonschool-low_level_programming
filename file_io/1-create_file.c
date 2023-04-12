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
	int op, wr;

	if (!filename)
		return (-1);

	if (!text_content)
		text_content = "";


	op = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (op == -1)
		return (-1);
	wr = write(op, text_content, strlen(text_content));
	if (wr == -1)
		return (-1);

	close(op);

	return (1);
}
