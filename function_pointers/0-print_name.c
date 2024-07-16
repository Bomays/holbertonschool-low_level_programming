#include <stdlib.h>
#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - function that prints a name
 *
 * @name: name of the person
 * @f: name to print in print_name callback function
 * Return: none
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	f(name);
}
