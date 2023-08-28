#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - function that frees a 2 dimensional grid
 *
 * @grid: 2D grid
 * @height: dimension heights for the grid
 *
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int m;

	for (m = 0; m < height; m++)
	{
		free(grid[m]);
	}

	free(grid);
}
