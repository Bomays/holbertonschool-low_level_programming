#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - function that prints all natural numbers
 * from n to 98, followed by a new line
 *
 * @n: firt number asked
 *
 * Return: no return
 *
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (n = n; n <= 97; n++)
		{
			printf("%d, ", n);

		if (n == 98)
			continue;
		}
		printf("%d", n);

	}
	else
	{
		for (n = n; n >= 97; n--)
		{
			printf("%d, ", n);

		if (n == 98)
			continue;
		}
		printf("%d", n);
	}
	printf("\n");
}
