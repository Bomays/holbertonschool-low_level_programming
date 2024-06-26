#include "main.h"
/**
 * swap_int - swaps the values of two integers.
 * @a: an integer input pointer
 * @b: second integer input pointer
 * Return : Always 0
 *
 */

void swap_int(int *a, int *b)
{
	int s = *a;
	/**int swap - temporary integer*/

	*a = *b;
	*b = s;
}
