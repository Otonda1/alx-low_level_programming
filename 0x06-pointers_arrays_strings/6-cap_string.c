#include "main.h"

/**
 * cap_string - capitalizes every first letter of words
 * @str: the input string
 * Return: str
 */

char *cap_string(char *str)
{
	int i, j;
	int separator[14] = {'\0', '\n', ',', '\t', ' ', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};
	for (i = 0; *(str + i) != '\0'; i++)
	{
		for (j = 0; j <= 13; j++)
		{
			if (*(str + i - 1) == separator[j] && str[i] >= 97 && str[i] <= 122)
				*(str + i) = *(str + i) - 32;
		}
	}
	return (str);
}

