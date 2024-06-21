#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 * Info : task 1 - Write a function that prints the alphabet, in lowercase,
 * followed by a new line.
 */

int main(void)
{
	void print_alphabet(void);
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);

	}
		_putchar('\n');

	return (0);
}
