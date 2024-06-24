#include "main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Description: printing function with:
 * 'n' to print 10 times
 * 'm' to print from 0 to 14
 *
 * Return: Always 0.
 **/
void more_numbers(void)
{
	int n;
	int m;

	for (n = 0; n <= 9; n++)
	{
		for (m = 0; m <= 14; m++)
		{
			if (m > 9)
				_putchar((m / 10) + '0');

			_putchar((m % 10) + '0');
		}
		
		_putchar('\n');
	}
}
