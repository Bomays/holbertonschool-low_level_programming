#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - variadic function that prints strings,
 * followed by a new line
 *
 * @separator: the string to be printed between the strings.
 * @n: number of strings passed to the function
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *result;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		result = va_arg(list, char*);

		if (result == NULL)
			printf("(nil)");

		else
		{
			printf("%s", result);

			if (i < n - 1 && separator != NULL)
				printf("%s", separator);
		}
	}
	va_end(list);
	printf("\n");
}
