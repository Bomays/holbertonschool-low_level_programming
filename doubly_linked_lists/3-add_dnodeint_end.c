#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_dnodeint_end - function that returns the adress of a new node
 * added at the end of a double linked list
 *
 * @head: the list
 * @n: value
 *
 * Return: return the adress of the new node
 *
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{

	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *last;

	if (head == NULL || new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	last = *head;

	while (last->next != NULL)
	{
		last = last->next;
	}

	last->next = new_node;
	new_node->prev = last;

	return (new_node);
}
