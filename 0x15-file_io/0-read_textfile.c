#include <stdio.h>
#include "main.h"

/**
 * read_textfile - a function that reads and print a text file
 * to POSIX
 * @filename: pointer to a string
 * @letters: number of letters to print
 * Return: The number of letters actually read, or 0 on failure
 * value of bytesize
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fd, rd, bytesize;

	if (filename == NULL)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	rd = read(fd, buffer, letters);
	bytesize = write(STDOUT_FILENO, buffer, rd);

	if (fd == -1 || rd == -1 || bytesize == -1)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(fd);
	return (bytesize);
}
