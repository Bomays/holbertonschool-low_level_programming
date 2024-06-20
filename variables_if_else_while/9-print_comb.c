/*
 * program that prints all possible combinations of single-digit numbers :
 * 0, 1, 2, 3, 4, 5, 6, 7, 8, 9$
 */

#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

	int main(void)
{
		int num;

		for (num = '0'; num <= '9'; num++)
	{
			putchar(num);
			if (num != '9')
		{
				putchar(',');
				putchar(' ');
		}
	}

		putchar('\n');

	return (0);
}
