#include "holberton.h"
#include <stdlib.h>

/**
* free_grid - frees 2 dimensional grid
* @grid: grids
* @height: grid's size
*
* Return: void
*/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free (grid);
}
