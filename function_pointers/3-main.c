#include <stdlib.h>
#include "3-calc.h"
#include <stdio.h>

/**
 * main - Entry point
 * @argc: int count argument
 * @argv: char argument - arrays of string
 *
 * Return: If the number of arguments is wrong, print Error,
 * followed by a new line, and exit with the status 98 if the operator
 * is none of the above, print Error, followed by a new line,
 * and exit with the status 99
 */

int main(int argc, char *argv[])
{
	int a;
	int b;
	int result;
	int (*operation_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	operation_func = get_op_func(argv[2]);

	if (operation_func == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	result = operation_func(a, b);
	/*
	 * see for ex file 3-mul.c in arg v argc project of
	 * holbertonschool-low_level[...]repository
	 */

	printf("%d\n", result);
	return (0);
}

