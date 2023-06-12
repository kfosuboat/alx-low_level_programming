#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees a two dimensional grid.
 * @grid: 2dimensional grid
 * @height: height of grid.
 * Description: frees memory of grid.
 *
 * Return: Nothing.
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
