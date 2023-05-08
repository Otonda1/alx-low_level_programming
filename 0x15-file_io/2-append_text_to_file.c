#include "main.h"

/**
 * append_text_to_file - appends text to an existing file
 * @filename: file to be appended
 * @text_content: text to append
 *
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int op, wr, strlen;

	if (filename == NULL)
		return (-1);

	strlen = 0;
	if (text_content != NULL)
	{
		while (text_content[strlen] != '\0')
			strlen++;
	}

	op = open(filename, O_WRONLY | O_APPEND, 0020);
	wr = write(op, text_content, strlen);

	if (op == -1 || wr == -1)
		return (-1);
	close(op);
	return (1);
}
