#include "2-main.h"
/**
 * _strncpy - it copies a string.
 *
 * code using for loops instead while
 *
 * @dest: destination string
 * @src: source string
 * @n: integer (characters number)
 *
 * Return: return dest chain
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)

		dest[i] = src[i];

	for (; i < n; i++)

		dest[i] = '\0';

	return (dest);
}
