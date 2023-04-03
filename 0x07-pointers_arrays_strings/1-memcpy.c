#include "main.h"

/**
 * _memcpy - copies n bytes of src into dest
 * @dest: destination array
 * @src: source array
 * @n: Length of array to be copied
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		*(dest + j) = *(src + j);
	}
	return (dest);
}
