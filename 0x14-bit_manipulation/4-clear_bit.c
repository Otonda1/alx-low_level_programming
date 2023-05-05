#include "main.h"

/**
 * clear_bit - sets bit at given index to 0
 * @n: integer provided
 * @index: position of value to be changed
 * Return: 1 for success, -1 otherwise
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(*n) * 8))
		return (-1);
	*n = *n & ~(1 << index);
	return (1);
}

