#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: the unsigned integer
 *
 * Return: return a pointer to the allocate memory or
 * return value "98" if malloc fails
 */
void *malloc_checked(unsigned int b)
{
	void *new_ptr;

	new_ptr = malloc(b);

	if (new_ptr == NULL)
	{
		exit(98);
	}
	return (new_ptr);
}
