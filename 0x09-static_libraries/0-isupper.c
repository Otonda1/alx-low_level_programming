#include "main.h"

/**
 * _isupper - checks for uppercase characters
 *
 * @c: input character
 * Return: 1 if uppercase, 0 otherwise
 */

int _isupper(int c)
{
	int i;

	if (c >= 65 && c <= 90)
		i = 1;
	else
		i = 0;
	return (i);
}

