#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * set_bit - function that sets the value of a bit to 1 at a given index.
 *
 * @n: the number that must be printed after been converted in binary
 * @index: index starting from 0 of the bit to set
 * Return: returns 1 it succeeded or -1 if it failed
 *
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bm;/**BitMask*/

	if (index > 63)
	{
		return (-1);
	}
	bm = 1 << index;
	*n = (*n | bm);

	return (1);
}



