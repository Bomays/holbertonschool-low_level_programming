#include "main.h"
/**
 * puts2 - prints every other character of a string,
 *	starting with the first character, followed by a new line.
 * @str: The string to print
 *
 * Return: None
 */
void puts2(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a += 2)
	/*other method : if (a % 2 == 0) find even number (with a++ instead a += 2)*/
	
		if (str[a] != '\0' && '\n')
	{
			_putchar(str[a]);
	}
	_putchar('\n');
}
