#include "main.h"

/**
 * print_array - prints a provided no of elements
 *		of an array
 *
 * @a: The array in question
 * @n: Number of elements
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
		{
			printf("%d, ", a[i]);
		}
		else
			printf("%d", a[i]);
	}
	printf("\n");
}
