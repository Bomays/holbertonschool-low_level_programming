#include "main.h"
/**
 * print_square - print a square in the terminal
 *
 * @size: is the size of the square
 * If 'size' is 0 or less, the function only prints a newline
 * # is the charater used to print the square
 * Return: None
 **/
void print_square(int size)
{
	int i;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			_putchar('#');
			_putchar('\n');
		}
	}
}
