#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * int_index - function that searches for an integer
 *
 * @size: number of elements of an array
 * @cmp: pointer to the function to be used to compare values
 * @array: array to iterate while comparing
 *
 * Return: int_index returns the index of the first element
 * for which the cmp function does not return 0
 * If no element matches, return -1
 * If size <= 0, return -1
 *
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}

	while (array && cmp && size > 0)
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
	return (-1);
}
