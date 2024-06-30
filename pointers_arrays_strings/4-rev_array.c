#include "2-main.h"
/**
 * reverse_array - it reverses the content of an array of integers .
 *
 * @a: array input
 * @n: number of integers
 *
 * Return: return none
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int temp;

	while (i < n--)
	{
		temp = a[i];
		a[i++] = a[n];
		a[n] = temp;
	}
}
