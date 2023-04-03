#include "main.h"

/**
 * _strpbrk - searches a string for any set
 *		of bytes
 * @s: The string
 * @accept: the set of bytes
 * Return: s
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (j = 0; s[j] != '\0'; j++)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (s[j] == accept[i])
				return (&s[j]);
		}
	}
	return (0);
}
