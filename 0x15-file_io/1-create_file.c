#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: name of the file
 * @text_content: content to put in file
 * Return: 1 if success -1 if fail
 */

int create_file(const char *filename, char *text_content)
{
	char *buffer;
	int fd, rd, bytesize;
	FILE *fp;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
	{
		fp = fopen(filename, "w");
		if (fp == NULL)
			return (-1);
		fclose(fp);
	}

	buffer = malloc(sizeof(text_content));
	if (buffer == NULL)
		return (-1);

	fd = open(filename, O_CREAT, 600);
	rd = read(fd, buffer, sizeof(text_content));
	bytesize = write(fd, buffer, rd);

	if (fd == -1 || rd == -1 || bytesize == -1)
	{
		free(buffer);
		return (-1);
	}
	free(buffer);
	close(fd);
	return (1);
}
