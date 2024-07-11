#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - function that allocates memory for an array, using malloc
 *
 * @nmemb: number of elements
 * @size: length byte size of elements
 *
 * Return: If nmemb or size is 0, then _calloc returns NULL
 * If malloc fails, then _calloc returns NULL,
 * if it works it returns a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *array;
	unsigned int i;

	if (nmemb == 0)
	{
		return (NULL);
	}
	if (size == 0)
	{
		return (NULL);
	}

	/*array = calloc(nmemb, sizeof(unsigned int));*/
	array = malloc(nmemb * sizeof(unsigned int));

	if (array == NULL)
	{
		return (NULL);
	}

	/*using malloc + memset to set memory to 0 instead of only calloc*/
	memset(array, 0, nmemb * size);

	for (i = 0; i < size; i++)
	{
		array[i] = nmemb;
	}

	return (array);
}
