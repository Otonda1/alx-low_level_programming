#include "main.h"

/**
 * set_bit - sets a bit at given index to 1
 * @n: pointer to an integer
 * @index: position whose value to be converted
 * Return: 1 (success), -1 otherwise
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(*n) * 8))
		return (-1);
	*n = *n | (1 << index);
	return (1);
}
