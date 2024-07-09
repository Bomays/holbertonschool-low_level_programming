#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * _strdup - function returns a pointer
 * to a new string which is a duplicate of the string str.
 * Memory for the new string is obtained with malloc,
 * and can be freed with free.
 *
 * @str: original string
 *
 * Return: Returns NULL if str = NULL
 * On success, the _strdup function returns a pointer to the duplicated string.
 * It returns NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	char *new_str;
	int length = 0;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[length] != '\0')
	{
		length++;
	}

	new_str = malloc(length * sizeof(char));
	/*Allocate memory for the new string:*/

	if (new_str == NULL)
	{
		return (NULL);/*Check if the memory allocation was successful*/
	}

	for (i = 0; i < length; i++)
	{
		new_str[i] = str[i];
	}

	return (new_str);
}

