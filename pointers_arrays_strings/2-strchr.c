#include "main.h"
#include <stddef.h>
/**
 * _strchr - locates a character in a string
 *
 * @s: character to be searched
 * @c: character to locate
 *
 * Return: return c in the string s, or NULL if the charcater is not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;

	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
