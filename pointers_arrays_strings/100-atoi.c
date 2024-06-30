#include "2-main.h"
/**
 * _atoi - convert a string in a int
 *
 * @s: points to a string
 *
 * Return: product of num and sign
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int num = 0;

	while (*s)
	{
		if (*s == '-')
			sign *= -1;

		else if (*s >= '0' && *s <= '9')
		{
			do {
				num = num * 10 + (*s - '0');
				s++;
			} while (*s >= '0' && *s <= '9');
			break;
		}
		s++;
	}
	return (num * sign);
}
