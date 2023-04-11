#include "main.h"

/**
 * alloc_grid - points to a 2D array of integers
 *
 * @width: matrix width
 * @height: matrix height
 * Return: 0 success, 1 otherwise
 */

int **alloc_grid(int width, int height)
{
	int i, j, **c;

	if (width <= 0 || height <= 0)
		return (NULL);
	c = (int **)malloc(sizeof(int *) * height);
	if (c == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		c[i] = (int *)malloc(sizeof(int) * width);
		if (c[i] == NULL)
		{
			while (i >= 0)
			{
				free(c[i]);
				i--;
			}
			free(c);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		c[i][j] = 0;
	}
	return (c);
}
