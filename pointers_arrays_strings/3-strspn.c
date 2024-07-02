#include "main.h"
/**
 *_strspn - locates a character in a string
 *
 * pointers are decomposed in the first active code (using i and j index)
 * while they are not in the inactive second one
 *
 * @s: the string where we search for the characters with index i
 * @accept: reference string from where characters are checked and accepted
 * with index j
 *
 * Return: return nb_bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int nb_bytes = 0;
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
			break;
			}
		}
		if (accept[j] == '\0')
		{
		break;
		}
		nb_bytes++;
	}
	return (nb_bytes);
}
/**
 * _strspn - locates a character in a string
 *
 * pointers are decomposed in the first active code (using i and j index)
 * while they are not here
 *
 * @s: the string where we search
 * @accept: reference string
 *
 * Return: return nb_bytes
 *
 *
 *
 * unsigned int _strspn(char *s, char *accept)
 * {
 *      unsigned int nb_bytes = 0;
 *	char *a = accept;
 *
 *	while (*s)
 *	{
 *		while (*a)
 *		{
 *			if (*s == *a)
 *			{
 *				break;
 *			}
 *			a++;
 *		}
 *		if (*a == '\0')
 *		{
 *			break;
 *		}
 *		s++;
 *		nb_bytes++;
 *	}
 *	return (nb_bytes);
 *}
 */



