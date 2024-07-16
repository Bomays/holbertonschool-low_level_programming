#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * array_iterator - function that executes another
 * function given as a parameter on each element of array
 *
 * @size: size of the array
 * @array: the array that will be iterate given with a pointer
 * @action: the function that iterate array
 *
 * Return: None
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
	{
		return;
	}
	else
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
}
