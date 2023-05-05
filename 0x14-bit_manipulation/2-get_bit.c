#include "main.h"

/**
 * get_bit - gets the bit at given index
 * @n: given integer
 * @index: position whose value to return
 * Return: value at given index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i;

	if (index > (sizeof(n) * 8))
		return (-1);
	for (i = 0; i < index; i++)
		n = n >> 1;
	return (n & 1);
}`
