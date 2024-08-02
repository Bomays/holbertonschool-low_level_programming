#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * delete_dnodeint_at_index - function that deletes
 * a node at a given position
 *
 * @index: index of the list where the node has to be deleted
 * @head: double pointer to head of node to delete
 * Return: return 1 if it succeeded or -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *delete_node;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}

	delete_node = *head;
	for (; delete_node != NULL && i < index; i++)
	{
		delete_node = delete_node->next;
	}
	/**-------------------------------------*/
	if (delete_node == NULL)
	{
		return (-1);
	}
	/**-------------------------------------*/
	if (*head == delete_node)
	{
		*head = delete_node->next;
	}
	/**--------------------------------------*/
	if (delete_node->next != NULL)
	{
		delete_node->next->prev = delete_node->prev;
	}
	/**---------------------------------------*/
	if (delete_node->prev != NULL)
	{
		delete_node->prev->next = delete_node->next;
	}
	free(delete_node);
	return (1);
}
