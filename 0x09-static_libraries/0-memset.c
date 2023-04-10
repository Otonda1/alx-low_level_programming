#include "main.h"

/**
 * _memset - prints character b in first
 *		n bytes pointed to by s
 * @s: pointer
 * @b: The constant byte to display
 * @n: memory size
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
