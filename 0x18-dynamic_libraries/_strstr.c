#include "main.h"

/**
 * _strstr - a function that locates a substring.
 * @haystack: String to be checked
 * @needle: String to be matched
 *
 * Return: a pointer to the current position of haystack
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		if (*haystack == *needle)
		{
			i = 0;

			while (haystack[i] == needle[i])
			{
				i++;

				if (needle[i] == '\0')
					return (haystack);
			}
		}

		haystack++;
	}
	return ('\0');
}
