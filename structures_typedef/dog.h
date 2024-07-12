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

typedef struct dog
{
	float age;
	char *name;
	char *owner;
}	dog_t;

/*----------------------------------------------*/

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
