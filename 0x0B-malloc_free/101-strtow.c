#include "main.h"
#include <stdlib.h>

/**
 * ch_free_grid - Frees a 2 dimensional array.
 * @grid: A multi-dimensional array made up of char.
 * @height: Height of the array.
 *
 * Return: NULL
 */
void ch_free_grid(char **grid, unsigned int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height > 0; height--)
			free(grid[height]);
		free(grid[height]);
		free(grid);
	}
}

/**
 * strtow - Splits a string into words.
 * @str: The string.
 *
 * Return: Pointer the array of integers.
 */
char **strtow(char *str)
{
	char **arout;
	unsigned int k, height, i, j, b1;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (k = height = 0; str[k] != '\0'; k++)
		if (str[k] != ' ' && (str[k + 1] == ' ' || str[k + 1] == '\0'))
			height++;
	arout = malloc((height + 1) * sizeof(char *));
	if (arout == NULL || height == 0)
	{
		free(arout);
		return (NULL);
	}
	for (i = b1 = 0; i < height; i++)
	{
		for (k = b1; str[k] != '\0'; k++)
		{
			if (str[k] == ' ')
				b1++;
			if (str[k] != ' ' && (str[k + 1] == ' ' || str[k + 1] == '\0'))
			{
				arout[i] = malloc((k - b1 + 2) * sizeof(char));
				if (arout[i] == NULL)
				{
					ch_free_grid(arout, i);
					return (NULL);
				}
				break;
			}
		}
		for (j = 0; b1 <= k; b1++, j++)
			arout[i][j] = str[b1];
		arout[i][j] = '\0';
	}
	arout[i] = NULL;
	return (arout);
}
