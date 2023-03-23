#include "main.h"

/**
 * print_line - draws a straight line on terminal
 * @n: input integer
 */

void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
		_putchar('_');
	_putchar('\n');
}

