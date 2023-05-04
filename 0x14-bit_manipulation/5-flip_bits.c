#include "main.h"

/**
 * flip_bits - finds number of bits you'd need to flip to
 *            get from one number to another
 * @n: integer one
 * @m: integer two
 * Return: said number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result, i;

	result = 0;
	i = n ^ m;
	while (i > 0)
	{
		if ((i & 1) == 1)
			result++;
		i = i >> 1;
	}
	return (result);
}
