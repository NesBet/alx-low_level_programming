#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees a 2 dimensional grid created by alloc_grid.
 * @grid: A multi-dimensional array made up of integers.
 * @height: Height of the grid.
 *
 * Return: NULL.
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
