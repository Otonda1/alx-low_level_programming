#include "main.h"

/**
 * _strcpy - copies elements from src to dest
 * @dest: destination address
 * @src: source address
 * Return: destination elements
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';

	return (dest);
}
