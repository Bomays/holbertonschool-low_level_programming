#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * print_binary - function that prints a binary number from an unsigned int
 *
 * @n: the number that must be printed after been converted in binary
 *
 * Return: void return
 *
 */
void print_binary(unsigned long int n)
{
	unsigned int printstart = 0;
	unsigned int bitmax = 0x7FFF;
	/**or 32767 in decimal the highest value in 16bits*/

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (bitmax)
	{
		if (printstart == 1 && (n & bitmax) == 0)
		{
			_putchar('0');
		}
		else if ((n & bitmax) != 0)
		{
			_putchar('1');
			printstart = 1;
		}
	bitmax >>= 1;/**divide bitmax by 2 moving it to next lower bit*/
		     /** until bitmax equals 0*/
	}
}