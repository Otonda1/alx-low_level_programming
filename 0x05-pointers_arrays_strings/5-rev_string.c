#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: String in question
 */

void rev_string(char *s)
{
	int i, j, k, l;

	for (i = 0; *(s + i) != '\0'; i++)
	{
	}
	j = i - 1;
	for (k = 0; k < j; k++, j--)
	{
		l = *(s + k);
		*(s + k) = *(s + j);
		*(s + j) = l;
	}
}
