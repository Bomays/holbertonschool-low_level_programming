#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * str_concat - function that concatenates two strings.
 * to a new string which is a duplicate of the string str.
 * Memory for the new string is obtained with malloc,
 * and can be freed with free.
 *
 * @s1: first string to evaluate
 * @s2: second string to evaluate
 *
 * Return: The returned pointer should point to a newly allocated
 * space in memory which contains the contents of s1,
 * followed by the contents of s2, and null terminated if NULL
 * is passed, treat it as an empty string.
 * The function should return NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	char *result;
	int len1 = 0;
	int len2 = 0;
	int i;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	result = malloc((len1 + len2 + 1) * sizeof(char));

	if (result == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		result[i] = s1[i];
	}
	for (i = 0; i <= len2; i++)
	{
		result[len1 + i] = s2[i];
	}
	result[len1 + len2] = '\0';

	return (result);
}
