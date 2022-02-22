#include "main.h"
/**
 * init_dog - main function
 * @d: struct of dog
 * @name: pointer to the name value
 * @age: float of the age value
 * @owner: pointer to owner name
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
