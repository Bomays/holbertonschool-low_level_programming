#include "main.h"
/**
 * print_rev - it prints a string in reverse followed by a new line
 * @s: The string to print
 *
 * len is the string length
 * Return: Always 0
 */
void print_rev(char *s)
{
	int len = 0;
	int i;

	while (s[len] != '\0')
	{
		len++;
		/** check the lengh til the end of chain \0 */
	       /** browsing each letter with len++ */
	}

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
		/** prints the chain in reverse i-- */
		 /** starting at the end len -1 of the chain s[i] */
	}

	_putchar('\n');
}
