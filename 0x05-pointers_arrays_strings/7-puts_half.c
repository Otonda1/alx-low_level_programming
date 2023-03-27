#include "main.h"

/**
 * puts_half - prints the final half of a string
 *
 * @str: String in question
 */

void puts_half(char *str)
{
	int i, length, x, y;

	for (i = 0; *(str + i) != '\0'; i++)
	{
	}
	length = i;
	if (length % 2 == 0)
	{
		x = (length / 2);
		for (y = length - x; y < length; y++)
			_putchar(str[y]);
	}
	else
	{
		x = (length - 1) / 2;
		for (y = length - x; y < length; y++)
			_putchar(str[y]);
	}
	_putchar('\n');
}

