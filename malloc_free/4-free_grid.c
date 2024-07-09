#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * free_grid - function that frees a 2 dimensional grid
 * as the previous task alloc_grid prototype
 *
 * @grid: double pointer to the grid the function frees
 * @height: rows number
 *
 * Return: return none - just free purpose of the function
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid == NULL)
	{
		return;
	}

	while (i < height)
	{
		free((int *)grid[i]);
		i++;
	}

	free(grid);
	{
	return;
	}
}
