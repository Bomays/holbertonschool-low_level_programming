#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - variadic function that prints a variable amount of numbers,
 * followed by a new line
 *
 * @separator: the string to be printed between the numbers.
 * @n: number of strings passed to the function
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arglist;
	unsigned int i;
	int numbers;

	va_start(arglist, n);

	for (i = 0; i < n; i++)
	{
		numbers = va_arg(arglist, int);

			printf("%d", numbers);

		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(arglist);
	printf("\n");
}
