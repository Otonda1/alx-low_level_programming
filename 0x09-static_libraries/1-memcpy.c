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
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
