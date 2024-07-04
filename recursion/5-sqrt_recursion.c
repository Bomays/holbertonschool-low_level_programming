#include "main.h"
/**
 * natural - natural square root value
 * _sqrt_recursion - function that returns the natural square root of a number
 *
 * @n: number given
 * @i: the natural square root of number given
 *
 * Return: returns -1 if n < 0, else return the natural square foot of n
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
/**
 * _sqrt_recursion - function that returns the natural square root of a number
 *
 * @n:number given
 *
 * Return: returns -1 if n < 0, else return the natural square foot of n
 *
 */
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
