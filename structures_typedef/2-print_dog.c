#include "dog.h"
#include <stdio.h>
/**
 * print_dog - function that prints a struct dog
 *
 * @d: pointer to dog struct elements
 *
 * Return: none
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("(nil)\n");

		else
			printf("Name: %s\n", d->name);

		if (d->age <= 0)
			printf("(nil)\n");

		else
			printf("Age: %6f\n", d->age);

		if (d->owner == NULL)
			printf("(nil)\n");

		else
			printf("Owner: %s\n", d->owner);
	}
}
