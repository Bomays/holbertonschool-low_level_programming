#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program prints all arguments it receives
 * including the first one ; printing one arg per line ending
 * with a new line
 *
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 *
 * Return: Always 0 (success)
 */

int main(int argc, char **argv)
{
	while (argc--)
		printf("%s\n", *argv++);

	return (0);
}
