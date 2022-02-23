#include "function_pointers.h"
/**
 * print_name - main function
 * @name: pointer that stores name
 * @f: pointer function
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != && f != NULL)
	{
		f(name);
	}
}
