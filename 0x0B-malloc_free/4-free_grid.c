#include "main.h"

/**
 * free_grid - frees the 2D matrix created earlier
 *
 * @grid: grid in question
 *
 * @height: height of grid
 *
 */

void free_grid(int **grid, int height)
{
	int x = 0;

	while (x < height)
	{
		free(grid[x]);
		x++;
	}
	free(grid);
}

