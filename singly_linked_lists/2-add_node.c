#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - function that prints the list
 * @str: pointer to the string
 * @head: pointer to pointer to head of singly list
 *
 * Return: return (count) the number of nodes
 *
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	unsigned int len = 0;
	unsigned int i;

	node = malloc(sizeof(*node));

	if (node == NULL)
	{
		printf("Malloc Error\n");
		return (NULL);
	}

	/**--------------------------node creation done---------------------------**/

	while (str[len] != 0)
	{
		len++;
	}

	node->str = malloc(len + 1);

	if (node->str == NULL)
	{
		free(node);
		return (NULL);
	}

	for (i = 0; i <= len; i++)
	{
		node->str[i] = str[i];
	}

	node->len = len;
	node->next = *head;
	*head = node;

	return (node);
}
