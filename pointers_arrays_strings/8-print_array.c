#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers,
 * followed by a new line.
 * @a: array
 * @n: number of elements in the array
 * ind stand for the index
 * Return: None
 */
void print_array(int *a, int n)
{
	int ind;

	for (ind = 0; ind < n; ind++)
	{
		printf("%d", a[ind]);

		if (ind != (n - 1))
		{
			printf(", ");
		}
	}
	putchar('\n');
}
