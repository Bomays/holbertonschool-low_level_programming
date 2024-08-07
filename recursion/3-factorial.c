#include "main.h"
/**
 * factorial - function that returns the factorial of a given number.
 *
 * @n: given number
 *
 * Return: return  -1 if n less than 0, return 1 if n is 0 and
 * else return the factorial
 *
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
