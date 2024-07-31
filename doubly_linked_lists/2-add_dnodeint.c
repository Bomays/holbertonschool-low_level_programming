#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_dnodeint - function that returns the adress of a new node
 * added at the beginning of a double linked list
 *
 * @head: the list
 * @n: value
 *
 * Return: return the adress of the new node
 *
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{

	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (head == NULL || new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;

	if (*head != NULL)
	{
		(*head)->prev = new_node;
	}

	*head = new_node;

	return (new_node);
}
