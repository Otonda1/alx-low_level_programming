#include "main.h"
#include <ctype.h>

/**
 * _islower - checks if a character is lowercase
 * Return: 0 if its not lowercase and 1 if it is
 *@c: character to be checked
 */
int _islower(int c)
{
	if (islower(c) == 0)
		return (0);
	else
		return (1);
}
