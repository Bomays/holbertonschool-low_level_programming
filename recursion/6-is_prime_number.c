#include "main.h"
/**
 * prime - prime number function search
 * is_prime_number - function that return 1 if the input
 * integer is a prime number
 *
 * @n: number given
 * @i: integer number
 *
 * Return: returns 1 if n is prime number, else return 0
 *
 */
int prime(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n % i == 0)
	{
		return (0);
	}
	if (i * i > n)
	{
		return (1);
	}
	return (prime(n, i + 1));
}

/**
 * is_prime_number - function that return 1 if
 * the input integer is a prime number
 *
 * @n:number given
 *
 * Return: returns 0 if n < 0, else return the prime number
 *
 */
int is_prime_number(int n)
{
	return (prime(n, 2));
}
