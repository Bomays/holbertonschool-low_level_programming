#include "main.h"
/**
 * _memset - fills memory with a constant byte
 *
 * @s: character or byte to be filled
 * @b: character - constant byte
 * @n: unsigned character
 *
 * Return: return s - the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{s[i] = b;}

	return (s);
}
