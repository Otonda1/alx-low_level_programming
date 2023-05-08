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
	char buffer[30];
	int  fd;
	int bytesize;

	if (filename == NULL)
		return (0);

	fd = open("Requiescat",  O_RDWR);

	if (fd == -1)
		return (0);
	read(fd, buffer, letters);
	bytesize = write(fd, buffer, letters);

	if (bytesize == -1)
		return (0);
	close(fd);
	return (bytesize);
}
