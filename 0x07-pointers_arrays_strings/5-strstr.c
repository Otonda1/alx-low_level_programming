#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string 1
 * @needle: substring
 *
 * Return: haystack if success, NULL otherwise
 */

char *_strstr(char *haystack, char *needle)
{
	int j, i;

	for (j = 0; haystack[j] != '\0'; j++)
	{
		for (i = 0; needle[i] != '\0'; i++)
		{
			if (haystack[j + i] != needle[i])
				break;
		}
		if (needle[i] == '\0')
			return (haystack + j);
	}
	return (0);
}
