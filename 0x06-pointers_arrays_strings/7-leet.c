#include "main.h"

/**
 * leet - Mozart 1337
 * @c: Input string
 * Return: c
 */

char *leet(char *c)
{
	int i, j;
	int k[10] = {'A', 'a', 'E', 'e', 'O', 'o', 'T', 't', 'L', 'l'};
	int m[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (c[i] == k[j])
			{
				c[i] = m[j];
			}
		}
	}
	return (c);
}

