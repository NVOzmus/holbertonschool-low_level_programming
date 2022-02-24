#include "function_pointers.h"
/**
 *
 *
 *
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t x;

	if(array != NULL && action != NULL)
	{
		for (x = 0; x < size; x++)
		{
		action(array[x]);
		}
	}
}
