#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program multiplies two numbers.
 * It prints the result of the multiplication, followed by a new line
 * The two numbers and result of the multiplication can be stored in an integer
 *
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 *
 * Return: 0 (success) or if it does not receive two arguments,
 * your program should print Error, followed by a new line,
 * and return 1
 */

int main(int argc, char **argv)
{
	int a, b, result;

	if (argc != 3)
	{
		printf("Error\n");
		{
			return (1);
		}
	}

	/*atoi convert the argument argv 1 and 2*/
	/*which are chain characters, in an integer*/
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	result = a * b;

	printf("%d\n", result);
	{
		return (0);
	}
}
