#include "main.h"
/**
 * _isupper - checks for uppercase charater
 *
 * @c: the letter value
 *
 * Description : function that checks for uppercase character
 *
 * Return: return 1 if C is uppercase, return 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
