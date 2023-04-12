#include "main.h"
#include <string.h>

/**
 * append_text_to_file - a function that appends text at the end of a file
 * @filename: file to use
 * @text_content: text to be appended
 *
 * Return: 1 on success, else -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int op, wr;

	if (!filename)
		return (-1);

	if (!text_content)
		text_content = "";

	op = open(filename, O_WRONLY | O_APPEND);
	if (op == -1)
		return (-1);
	wr = write(op, text_content, strlen(text_content));
	if (wr == -1)
		return (-1);

	close(op);

	return (1);
}
