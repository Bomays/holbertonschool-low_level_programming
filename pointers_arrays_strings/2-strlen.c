#include "main.h"
/**
 * _strlen - returns the length of a string.
 *
 * @s: pointer to the start of the caraters chain
 * and go ahead the caracters thanks to 'length'
 * until it encounters the null terminator '\0',
 * by being incremented of 1 each letter.
 *
 * Return: Always lenght
 *
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}
