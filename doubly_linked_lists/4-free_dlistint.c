#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_dlistint - function that frees a double list
 * @head: pointer to head of double list
 *
 * Return: (void) return
 *
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
