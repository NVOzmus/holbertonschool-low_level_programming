#include "dog.h"
/**
 * print_dog - primary function
 * @d: dog value holder
 * Return: element, NULL, nil or nothing
 */

#include "dog.h"                                                                                                 
                                                                                                                 
/**                                                                                                              
 * * print_dog - entry point for the function                                                                       
 * * @d: pointer to dog                                                                                             
 * * Return: void                                                                                                   
 * */                                                                                                               
                                                                                                                 
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", (d->name == NULL ? "(nil)" : d->name));
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", (d->owner == NULL ? "(nil)" : d->owner));
	}
} 
