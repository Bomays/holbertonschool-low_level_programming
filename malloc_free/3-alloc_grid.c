#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * alloc_grid - function that returns a pointer to a
 * 2 dimensional array of integers
 *
 * @width: columns number
 * @height: rows number
 *
 * Return: function return NULL on failure
 * If width or height is 0 or negative, return NULL
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = malloc(height * sizeof(int *));
	/*grid is a pointer to a pointer to an integer*/
	/*allocates a block of memory large enough to*/
	/*hold height pointers to integers and assigns*/
	/*the address of the first byte of the block to grid*/

	if (grid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		/*grid[i] is a pointer to an integer*/
		/*allocates a block of memory large enough to*/
		/*hold height integers and assigns the address of*/
		/*the first byte of the block to grid[i]*/
		if (grid[i] == NULL)
		{
			while (i >= 0)
			{
				free(grid[i]);
				i--;
			}
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}
	return (grid);
}
