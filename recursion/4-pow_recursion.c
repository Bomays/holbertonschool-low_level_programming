#include "main.h"
/**
 * _pow_recursion - function that returns the factorial of a given number.
 *
 * @x: integer value
 * @y: power to x
 *
 * Return: returns -1 if n less than 0, returns 1 if n is 0 and
 * else returns the value of x raised to the power of y
 *
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
