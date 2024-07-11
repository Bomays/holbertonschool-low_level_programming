#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - function that creates an array of integers
 * containing all the values from min to max thus ordered
 *
 * @min: minimum value in the created array
 * @max: maximum value in the created array
 *
 * Return: the pointer to the newly created array
 * if min > max, return NULL and if malloc fails, return NULL
 */
int *array_range(int min, int max)
{
	int *array;
	int i;
	int size;

	if (min > max)
	{
		return (NULL);
	}

	size = max - min;/*taille du tableau*/
	array = malloc((size + 1) * sizeof(int));

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= size; i++)

		array[i] = min++;

	return (array);
}
