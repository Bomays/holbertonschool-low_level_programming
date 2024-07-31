#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - function that add a node at the end of a list
 * @str: pointer to the string
 * @head: pointer to pointer to head of singly list
 *
 * Return: return the new node
 *
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node, *temp;
	unsigned int len = 0;

	node = malloc(sizeof(*node));

	if (node == NULL)
	{
		free(node);
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
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = node;
	}
	return (node);
}
