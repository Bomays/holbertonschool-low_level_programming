#include "2-main.h"
/**
 * _strcmp - it compares two strings.
 *
 * @s1: first character chain pointer on *s1 character
 * @s2: first character chain pointer on *s2 character
 *
 * Return: return 0 when equals or their difference if not
 */
int _strcmp(char *s1, char *s2)
{
	for (; (*s1 != '\0' && *s2 != '\0') && (*s1 == *s2); s1++, s2++)
	{
	if (*s1 == *s2)
		return (0);
	}
	return (*s1 - *s2);
}
