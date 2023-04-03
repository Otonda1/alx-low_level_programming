#include "main.h"

/**
 * print_diagsums - prints sum of both diagonals of a
 *			square matrix
 *
 * @a: Multidimensional array (square matrix)
 * @size: size of matrix
 */

void print_diagsums(int *a, int size)
{
	int sum1, sum2, j, s;

	sum1 = 0;
	sum2 = 0;
	s = size * size;
	for (j = 0; j < s; j += size + 1)
		sum1 += a[j];
	for (j = size - 1; j < s - 1; j += size - 1)
		sum2 += a[j];
	printf("%d, %d\n", sum1, sum2);
}
