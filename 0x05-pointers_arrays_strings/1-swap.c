#include "main.h"

/**
 * swap_int - swaps the values of two variables
 *
 * @a: variable 1
 * @b: variable 2
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
