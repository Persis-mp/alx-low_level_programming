#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - free 2d array
 * @grid: 2d grid
 * @height: height dimensin of grid
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
