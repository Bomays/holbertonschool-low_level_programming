#include "main.h"

/**
 * print_alphabet_x10 - Check description
 * Description: It prints 10 times the alphabet,
 * in lowercase, followed by a new line.
 * Return: None.
 */
void print_alphabet_x10(void)
{
	int number;
	char letter;

	for (number = 1; number <= 10; number++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
	}
}
