#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: string 1
 * @src: string 2
 * @n: integer limit of src
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (*(dest + i) != '\0')
	{
		i++;
	}
	for (j = 0; j < n && *(src + j) != '\0'; j++)
	{
		*(dest + i) = *(src + j);
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

