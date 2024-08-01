#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * get_dnodeint_at_index - function that returns
 * the nth node of a distint_t linked list
 * @head: pointer to head of double list
 * @index: position of the node to return
 * Return: return head or null if node does not exists
 *
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int position = 0;

	while (head)
	{
		if (position == index)
			return (head);
		head = head->next;
		position++;
	}
	return (NULL);
}
