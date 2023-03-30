#include "main.h"

/**
 * reverse_array - reverses an array
 * @a: Array in question
 * @n: no of elements in the array
 */

void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0; i < n-- ; i++)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
