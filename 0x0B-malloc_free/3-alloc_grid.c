#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a 2 dimensional array of integers
 * @width: width dimension
 * @height: height dimension
 *
 * Return: int pointer
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid = NULL;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(sizeof(int) * height);
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}
	return (grid);
}

