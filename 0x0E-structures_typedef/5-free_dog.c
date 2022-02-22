#include "dog.h"

/**
 * free_dog - main function
 * @d: refers to dog_t
 *Return: 0
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
