#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *  free_grid - a function that frees a 2 dimensional grid
 *  previously created by your alloc_grid function.
 *  @grid: integer array
 *  @height: height
 *  Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
