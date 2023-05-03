#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *free_grid - A function that frees a 2 dimensional grid
 * * @grid: The address of the two dimensional grid
 * * @height: The number of rows in the grid.
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void free_grid(int **grid, int height)
{
	int i;

	i = 0;
	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
