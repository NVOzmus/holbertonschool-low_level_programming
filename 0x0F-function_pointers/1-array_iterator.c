#include "function_pointers.h"
/**
 * array_iterator - main function
 * @array: array variable
 * @size: size
 * @action: action
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t x;

	if (array != NULL && action != NULL)
	{
		for (x = 0; x < size; x++)
		{
		action(array[x]);
		}
	}
}
