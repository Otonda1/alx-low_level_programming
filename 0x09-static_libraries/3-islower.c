#include "main.h"

/**
 * _islower - checks for lowercase characters
 *
 * @c: input character as an integer
 * Return: 1 if lowercase, 0 if not
 */
int _islower(int c)
{
	if (c >= 97 && c <= 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
