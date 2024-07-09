#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * create_array - function that creates an array of chars,
 * and initializes it with a specific char.
 *
 * @size: size of the array to create
 * @c: character used for each element initialization of the array
 *
 * Return: return pointer on the created array
 * or NULL if the size is 0 or if malloc fail
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
		return (NULL);

	array = malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	array[size] = '\0';

	return (array);
}
