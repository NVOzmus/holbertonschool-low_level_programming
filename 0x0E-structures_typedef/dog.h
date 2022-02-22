#ifndef DOG_H
#define DOG_H
#include <stdlib.h>
#include <stdio.h>

/**
 * struct dog - structure associated with dog
 * @name: char holds name
 * @age: float of age
 * @owner: char holding owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif /* DOG_H */