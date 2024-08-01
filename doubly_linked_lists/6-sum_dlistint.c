#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * sum_dlistint - function that returns the sum of all the data (n)
 * of a dlistint_t linked list.
 *
 * @head: pointer to head of double list
 *
 * Return: returns sum, the sum of all the data (n)
 * of a dlistint_t linked list, or 0 if list is NULL
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

