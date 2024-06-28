#include "main.h"
/**
 * _strcpy - copies string to a given memory location
 *
 * @dest: the buffer point - destintation of the copy
 * @src: location of the strings pointed:w
 *
 *
 * Return: return dest
 */
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')

	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
	return (start);
}
