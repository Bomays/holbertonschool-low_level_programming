#include <string.h>
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
	int length;

	if (str == NULL)
	{
		return (NULL);
	}

	length = strlen(str);/*Calculate the length of the input string st*/

	new_str = malloc(length * sizeof(char));
	/*Allocate memory for the new string:*/

	if (new_str == NULL)
	{
		return (NULL);/*Check if the memory allocation was successful*/
	}

	strcpy(new_str, str);/*copy string to new one*/ int length

	return (new_str);
}

