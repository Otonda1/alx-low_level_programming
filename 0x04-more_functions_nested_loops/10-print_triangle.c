#include "main.h"

/**
 * print_triangle - displays a triangle
 *
 * @size: triangle size (input)
 */
void print_triangle(int size)
{
	int row, column, i;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (row = 1; row <= size; row++)
		{
			for (column = size - row; column > 0; column--)
				_putchar(' ');
			for (i = 1; i <= row; i++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
