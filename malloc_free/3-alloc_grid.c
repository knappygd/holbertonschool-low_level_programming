#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - print a grid thing
 * @width: gridwidth
 * @height: gridheight
 *
 * Return: grid
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}

	if (width < 1 || height < 1)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);

		if (grid == NULL)
		{
			free(grid);
			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}

	return (grid);
}
