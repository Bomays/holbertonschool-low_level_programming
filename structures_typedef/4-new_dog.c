#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - function that creates a new dog
 * @name: dog's name in a string
 * @age: dog's age in a float
 * @owner: dog's owner name in a string
 * Return: return the new dog or NULL if something is wrong
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *name_copy, *owner_copy;
	int name_len = 0, owner_len = 0, i = 0, j = 0;

	if (name == NULL || owner == NULL || age < 0)
		return (NULL);

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	while (name[name_len])
		name_len++;
	name_copy = malloc((name_len + 1) * sizeof(char));

	if (name_copy == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	for (; i <= name_len; i++)
		name_copy[i] = name[i];

	while (owner[owner_len])
		owner_len++;
	owner_copy = malloc((owner_len + 1) * sizeof(char));

	if (owner_copy == NULL)
	{
		free(name_copy);
		free(new_dog);
		return (NULL);
	}
	for (; j <= owner_len; j++)
		owner_copy[j] = owner[j];

	new_dog->name = name_copy;
	new_dog->age = age;
	new_dog->owner = owner_copy;
	return (new_dog); /* OUFFFFFFF!!!!! YEEPPAAA!!!!*/
}
