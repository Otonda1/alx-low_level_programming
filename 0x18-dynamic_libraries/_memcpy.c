#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src
 * to memory area dest
 * @dest: pointer to destination address
 * @src: pointer to the array to copy from
 * @n: number of bytes to copy from src
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
