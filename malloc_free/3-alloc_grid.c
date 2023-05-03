#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *alloc_grid - A function that returns a pointer to a 2 dimensional
 * * @width: The number of columns in the grid
 * * @height: The number of rows in the grid
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int **alloc_grid(int width, int height)
{
	int i, j, **grid;

	i = 0;
	j = 0;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = (int **) malloc(height * sizeof(int *));

	if (grid == NULL)
	{
		return (NULL);
	}

	for (; i < height; i++)
	{
		grid[i] = (int *) malloc(width * sizeof(int));

		if (grid[i] == NULL)
		{
			for (; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}
		for (; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
