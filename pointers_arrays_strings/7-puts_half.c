#include "main.h"
/**
 * puts_half - prints half of a string, followed by a new line
 *	starting with the first character, followed by a new line.
 * @str: The string to print
 * ind stand for the index
 * Return: None
 */
void puts_half(char *str)
{
	int ind = 0;
	int half;

	while (str[ind] != '\0')
		ind++;

	half = ind / 2;

	if (ind % 2 == 1)
		half++;

	for (; half < ind; half++)
	{
		_putchar(str[half]);
	}

	_putchar('\n');
}
