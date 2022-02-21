#include "main.h"
/**
 * array_range - the main function
 * @min: minimum value variable
 * @max: maximum value variable
 *
 * Return: pointer to new array, otherwise NULL
 */

int *array_range(int min, int max)
{
	int *array;
	int x, length;
	int y = min;

	if (min > max)
	{
		return (NULL);
	}

	length = (max - min) + 1;

	array = malloc(sizeof(int) * length);

	if (array == NULL)
	{
		return (NULL);
	}

	for (x = 0; y <= max; y++)
	{
		array[x] = y;
		x++;
	}
	return (array);
}
