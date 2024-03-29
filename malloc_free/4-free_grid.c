#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2D grid previously created by the alloc_grid function.
 * @grid: the grid to free.
 * @height: the height of the grid.
 *
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
	{
		return;
	}

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}

