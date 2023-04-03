#include "main.h"

/**
 * _strspn - counts the length of a prefix
 *		substring
 * @s: string under investigation
 * @accept: prefix
 * Return: length
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, length;

	length = 0;
	for (j = 0; s[j] != '\0'; j++)
	{
		for (i = 0; accept[i] != '\0' && accept[i] != s[j]; i++)
			;
		if (accept[i] == s[j])
			length++;
		if (accept[i] == '\0')
			return (length);
	}
	return (length);
}
