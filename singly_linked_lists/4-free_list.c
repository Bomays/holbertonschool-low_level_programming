#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_list - function that frees a single list
 * @head: pointer to head of singly list
 *
 * Return: (void) return
 *
 */
void free_list(list_t *head)
{
	list_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head->str);
		free(head);
		head = next;
	}
}
