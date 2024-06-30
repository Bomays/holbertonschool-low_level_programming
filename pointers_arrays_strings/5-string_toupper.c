#include "2-main.h"
/**
 * string_toupper - it changes all lowercase letters of a string to uppercase .
 *
 * @s: letters
 *
 * Return: return begin - char pointer to uppercase string
 */
char *string_toupper(char *s)
{
	char *begin = s;

	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
			*s -= 32;/*diference between low and uppercase in ASCII*/
		s++;
	}
	return (begin);/*check doc at the top*/
}
