#include "main.h"
/**
 * _isalpha - checks for alphabetic character.
 * @c: it checks for both lower and uppercase letters
 *
 * Return: return 1 if 'c' is a letter, return 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
