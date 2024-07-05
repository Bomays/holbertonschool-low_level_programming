#include <ctype.h>/*isdigit header*/
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: This program adds positive number.
 * When no number is passed to the program, it prints 0, followed by a new line
 *
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 *
 * Return: 0 or when  one of the number contains symbols that
 * are not digits, print Error followed by a new line, and return 1
 */

int main(int argc, char **argv)
{
	int i, j, sum = 0;/*i is the arg index, j is char index in arg*/

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	/*iterate through arguments*/
	{
		for (j = 0; argv[i][j] != '\0'; j++)
			/*iterate through characters from 0*/
		{
			if (!isdigit(argv[i][j]))
			/*isdigit tells if the arg is a number, we had ! so it*/
			/* reverse it and so tells if the arg is not a number*/
			{
				printf("Error\n");
				{
					return (1);
				}
			}
		}
		sum = sum + atoi(argv[i]);/*see 3-mul.c task for using atoi*/
	}
	printf("%d\n", sum);
	return (0);
}
