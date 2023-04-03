#include "main.h"

/**
 * print_chessboard - draws chessboard on stdout
 *
 * @a: 2D matrix
 *
 * Return: 0 (success)
 */

void print_chessboard(char (*a)[8])
{
	int j, i;

	for (j = 0; j < 8; jj++)
	{
		for (i = 0; i < 8; i++)
		{
			putchar(a[j][i]);
			if (i == 7)
				putchar('\n');
		}
	}
}
