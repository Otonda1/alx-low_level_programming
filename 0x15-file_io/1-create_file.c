#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: name of the file
 * @text_content: content to put in file
 * Return: 1 if success -1 if fail
 */

int create_file(const char *filename, char *text_content)
{
	int op, wrt, strlen = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[strlen] != '\0')
			strlen++;
	}
	op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wrt = write(op, text_content, strlen);

	if (op == -1 || wrt == -1)
		return (-1);
	close(op);
	return (1);
}
