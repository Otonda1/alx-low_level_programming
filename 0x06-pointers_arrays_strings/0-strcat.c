#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string 1
 * @src: string 2
 * Return: pointer to concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (*(dest + i) != '\0')
	{
		i++;
	}
	j = 0;
	while (*(src + j) != '\0')
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	return (dest);
}

