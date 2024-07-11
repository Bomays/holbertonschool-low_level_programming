#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - function that allocates memory for an array, using malloc
 *
 * @nmemb: number of elements
 * @size: byte size of elements
 *
 * Return: If nmemb or size is 0, then _calloc returns NULL
 * If malloc fails, then _calloc returns NULL,
 * if it works it returns a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned char *array;
	unsigned int i;

	if (nmemb == 0)
	{
		return (NULL);
	}
	if (size == 0)
	{
		return (NULL);
	}

	/*array = calloc(nmemb, sizeof(unsigned int)); forbidden use on checker*/
	array = malloc(nmemb * sizeof(unsigned int));

	if (array == NULL)
	{
		return (NULL);
	}

	/*using malloc + memset to set memory to 0 instead of only calloc*/
	/*memset(array, 0, nmemb * size);  forbidden use on checker*/

	for (i = 0; i < nmemb * size; i++)
	/*nmemb * size represents the total amount of bytes of array*/
	{
		array[i] = 0;/*simply set bytes of allocated memory to 0*/
	/*initialization verification {printf("array[%u] = %u\n", i, array[i]);}*/
	}
	return (array);
}
