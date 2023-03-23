#include "main.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers 0 to 9
 *
 */

void print_numbers(void)
{
	int n;

	for (n = 48 ; n < 58 ; n++)
		_putchar(n);
	_putchar('\n');
}
