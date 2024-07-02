#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 *
 * @s: the string where we search for the characters with index i
 * @accept: reference string from where characters are checked and accepted
 * with index j
 *
 * Return: return nb_bytes
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	if (!s || !accept) /*! is for negation : if pointers are NULL*/
	{
		return (0);
	}
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
		if (s[i] == accept[j])
		{
		return (s + i);
		}
		}
	}
	return (0);
}
