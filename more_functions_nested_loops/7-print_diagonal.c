#include "main.h"
/**
 * print_diagonal - draws a diagonal line in the terminal
 *
 * @n: is the number of times the character \ should be printed
 * If 'n' is 0 or less, the function only prints a newline character
 *
 * Return: None
 **/
void print_diagonal(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}

		else
		{
			for (i = 0; i < n; i++)
			{
				_putchar('\\');
			}	
			_putchar('\n');
		}
}
