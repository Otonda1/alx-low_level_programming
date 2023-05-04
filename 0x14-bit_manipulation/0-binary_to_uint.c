#include "main.h"

/**
 * binary_to_uint - converts binary number to
 *                  unsigned int
 * @b: binary number in string format
 *
 * Return: converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0, index = 0;
	const char *str;

	str = b;
	if (b == NULL)
		return (0);
	while (*b != '\0')
	{
		if (*b != '1' && *b != '0')
			return (0);
		b++;
	}
	b--;
	while (b >= str)
	{
		sum += ((*b - '0')) * (1 << index);
		index++;
		b--;
	}
	return (sum);
}
