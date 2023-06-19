#include "main.h"
#include <ctype.h>

/**
 * _isalpha - check if a character is alphabetic character
 * Return: 0 if its not an alphabetic character 1 if it is
 * @c: character to be checked
 */
int _isalpha(int c)
{
	if (isalpha(c) == 0)
		return (0);
	else
		return (1);
}
