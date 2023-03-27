#include "main.h"

/**
 * puts2 - prints every other element of a string
 *
 * @str: String in question
 */

void puts2(char *str)
{
	int i;

	for (i = 0; *(str + i) != '\0'; i++)
	{
		if (i % 2 != 0)
			continue;
		else
			_putchar(str[i]);
	}
	_putchar('\n');
}
