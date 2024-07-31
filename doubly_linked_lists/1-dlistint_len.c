#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * dlistint_len - function that returns the number
 * of elements in a linked double list
 *
 * @h: pointer to start of list
 *
 * Return: return (count) the number of nodes
 *
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
