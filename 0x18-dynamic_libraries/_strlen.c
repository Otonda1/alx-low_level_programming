#include "main.h"
#include "string.h"

/**
 *_strlen - return length of argument
 * @s: string to be counted
 * Return: length of s
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
