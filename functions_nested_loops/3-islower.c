#include "main.h"
/**
 * _islower - checks for lowercase character.
 * @c: it checks for lowercase character
 *
 * Integer 'c' checked if it is in a lowercase.
 *
 * Return: return if 'c' in lowercase, if nt it return 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
