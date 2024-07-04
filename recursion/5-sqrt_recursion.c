#include "main.h"
/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * natural - natural square foot value
 * @n: number given
 * @i: the natural square root of number given
 * Return: returns -1 if n < 0, else return the natural square foot of n
 *
 * else returns the value of x raised to the power of y
 *
 */
int natural(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	else if	(i * i > n)
	{
		return (-1);
	}
	else
	{
		return (natural(n, i + 1));
	}
}

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (natural(n, 0));
	}
}
