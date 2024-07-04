#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program prints the name of the program.
 *
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 *
 * Return: Always 0 (success)
 */

int main(int argc, char **argv)
{
	(void)**argv;
        printf("%d\n", argc - 1);
        return (0);
}
