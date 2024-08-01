#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index - function that inserts
 * a new node at a given position
 *
 * @idx: index of the list where the new node should be added
 * @h: double pointer to start of list
 * @n: data of the new node to insert
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *tmp;
	unsigned int i;

	new_node = malloc(sizeof(dlistint_t));
	if (h == NULL || new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	/**-------------------------------------*/
	if (idx == 0)
		return (add_dnodeint(h, n));
	/**-------------------------------------*/
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	/**--------------------------------------*/
	tmp = *h;
	for (i = 0; tmp != NULL && i < idx - 1; i++)
		tmp = tmp->next;
	/**---------------------------------------*/
	if (tmp == NULL || (tmp->next == NULL && i < idx - 1))
	{
		free(new_node);
		return (NULL);
	}
	/**-----------------------------------------*/
	new_node->next = tmp->next;
	new_node->prev = tmp;

	if (tmp->next == NULL)
	{
		return (add_dnodeint_end(h, n));
	}
	else
	{
		tmp->next->prev = new_node;
		tmp->next = new_node;
	}
	return (new_node);
}
