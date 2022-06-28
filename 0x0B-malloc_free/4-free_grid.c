#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - function to free memory from grid
 * @grid: grid to free;
 * @height: height of grid;
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
