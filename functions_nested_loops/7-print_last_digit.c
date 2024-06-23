#include "main.h"
/**
 * print_last_digit - print the last digit of a number.
 *
 * @r: integer value
 *
 * Explication :
 * if (r < 0) n = -1 * (r % 10);
 * if 'r' is more than 0,(r % 10) takes the last number of the argument and
 * multiply it with -1 to have a positive integer
 *
 * _putchar((n % 10) + '0');
 * it converts the last number of 'n' thanks to modulo operator '%'
 * (which gives the remainder of the division of 'n' by 10),
 * in a caracter with "+0", and print it with '_putchar'.
 *
 * Return: return the value of last digit
 */

int print_last_digit(int r)
{
	int n;

	if (r < 0)
		n = -1 * (r % 10);

	else
		n = r % 10;

	_putchar((n % 10) + '0');

	return (n % 10);
}
