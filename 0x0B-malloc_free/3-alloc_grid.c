#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2 dimensional array of integers.
 * @width: Width of the array.
 * @height: Height of the array.
 *
 * Return: Pointer to the array of integers.
 */
int **alloc_grid(int width, int height)
{
	int **gridend;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);

	gridend = malloc(height * sizeof(int *));
	if (gridend == NULL)
	{
		free(gridend);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		gridend[i] = malloc(width * sizeof(int));
		if (gridend[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(gridend[i]);
			free(gridend);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			gridend[i][j] = 0;

	return (gridend);
}
