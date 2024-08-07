#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - function that add a node at the beginning of the list
 * @str: pointer to the string
 * @head: pointer to pointer to head of singly list
 *
 * Return: return the new node
 *
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	unsigned int len = 0;

	node = malloc(sizeof(*node));

	if (node == NULL)
	{
		return (NULL);
	}


	while (str[len] != 0)
	{
		len++;
	}

	node->str = strdup(str);
	if (node->str == NULL)
	{
		free(node);
		return (NULL);
	}

	node->len = len;
	node->next = *head;
	*head = node;

	return (node);
}
