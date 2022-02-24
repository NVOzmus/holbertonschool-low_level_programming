#include "function_pointers.h"
/**
 * print_name - main function
 * @name: pointer that stores name
 * @f: pointer function
 * Return: void. f(name)
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
