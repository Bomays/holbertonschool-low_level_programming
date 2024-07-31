#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint - function that prints the list
 * @h: pointer to start of list
 *
 * Return: return (count) the number of nodes
 *
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);

		h = h->next;
		count++;
	}
	return (count);
}
