#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: the number that must be returned after been converted in binary
 *
 * Return: returns the value of a bit at a given index
 * or -1 if failed
 *
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 32767)
		/**0x7FFF in hexadecimal highest value in 16bits*/
	{
		return (-1);
	}

	return ((n >> index) & 1);
}
