#ifndef DOG_STRUCT_H
#define DOG_STRUCT_H
/*-----------------------------------------------*/
/**
 * struct dog - structure define for poppy dog
 *
 * @name: dog's name in a string
 * @age: dog's age in a float
 * @owner: dog's owner name in a string
 */

struct dog
{
	float age;
	char *name;
	char *owner;
};

#endif
