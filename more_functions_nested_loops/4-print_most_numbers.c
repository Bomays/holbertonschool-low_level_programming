#include "main.h"
/**
 * print_most_numbers - prints 0 to 9 excluding 2 and 4
 *
 * Return: return 0
 */
void print_most_numbers(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		if (num != '4' && num != '2')
		{
			_putchar(num);
		}
	}
	_putchar('\n');
}
