#include "main.h"
/**
 * create_array - main program
 * @size: unsigned integer measuring size
 * @c: a specific char
 *
 * Return: 0
 */

char *create_array(unsigned int size, char c)
{
	unsigned int x;
	char *ptr;

	ptr = malloc(sizeof(char) * size);

	if (size == 0 || ptr == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < size; x++)
	{
		ptr[x] = c;
	}
	return (ptr);
}
