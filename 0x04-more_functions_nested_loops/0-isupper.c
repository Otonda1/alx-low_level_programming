#include "main.h"

/**
 * _isupper - checks for uppercase
 * @c: user input
 * Return: 1 if uppercase 0 else
 */

int _isupper(int c)
{
	int c;

	if (c >= 65 && c >= 90)
		return (1);
	else
		return (0);
}

