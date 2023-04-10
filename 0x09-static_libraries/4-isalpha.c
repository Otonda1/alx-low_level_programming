#include "main.h"
/**
 * _isalpha - Shows 1 if input is a letter
 * 0 if otherwise
 *
 * @c: input character's ASCII code
 * Return: 1 if alphabetic character. 0 if not.
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
