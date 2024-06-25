#include "main.h"
/**
 * print_triangle - print a triangle in the terminal
 *
 * @size: is the size of the triangle
 * If 'size' is 0 or less, the function only prints a newline
 * # is the charater used to print the square
 * Return: None
 **/
void print_triangle(int size)
{
	int i;
	int j;
	int k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	
	{
		for (i = 0; i < size; i++)
		{
				for (j = size - i; j > 1; j--)
				{
					_putchar(' ');
				}
				for (k = 0; k <= i; k++)
                                {
                                        _putchar('#');
                                }

			_putchar('\n');
		}
	}
}
