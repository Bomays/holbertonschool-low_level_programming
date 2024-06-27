#include "main.h"
/**
 * _puts - it prints a string followed by a new line to stdout
 * @str: The string to print
 *
 * Return: Always 0
 */
void _puts(char *str)
{
	while (*str)/*loops trough the string*/
	{
		_putchar(*str);
		str++;
		/*prints the string browsing each carater with str++*/
		}
	_putchar('\n');/*new line to stdout*/
}

