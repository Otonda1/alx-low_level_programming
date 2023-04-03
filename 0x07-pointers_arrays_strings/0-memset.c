#include "main.h"

/**
 * _memset - prints character b in first
 *		n bytes pointed to by s
 * @s: pointer to char
 * @b: The byte to display
 * @n: memory size
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		*(s + j) = b;
	}
	return (s);
}
