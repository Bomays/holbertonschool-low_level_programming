#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"


/*--------------------------------------------------------------------------*/
/**
 * op_add - function that adds two integers
 * @a: input integer a
 * @b: input integer b
 *
 * Return: return the result of two integers a and b sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/*---------------------------------------------------------------------------*/
/**
 * op_sub - function that substracts two integers
 * @a: input integer a
 * @b: input integer b
 *
 * Return: return the result of two integers a and b sub
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/*--------------------------------------------------------------------------*/
/**
 * op_mul - function that multiplies two integers
 * @a: input integer a
 * @b: input integer b
 *
 * Return: return the result of two integers a and b mul
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/*-------------------------------------------------------------------------*/
/**
 * op_div - function that divides two integers
 * @a: input integer a
 * @b: input integer b
 *
 * Return: return the result of two integers a and b divison
 */
int op_div(int a, int b)
{
	if (a == 0 || b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/*--------------------------------------------------------------------------*/
/**
 * op_mod - modulo function that modules two integers
 * @a: input integer a
 * @b: input integer b
 *
 * Return: return the result of two integers a and b mod
 */
int op_mod(int a, int b)
{
	if (a == 0 || b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
