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
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0' && accept[j] != s[i]; j++)
			;
		if (accept[j] == s[i])
			length++;
		if (accept[j] == '\0')
			return (length);
	}
	return (length);
}
