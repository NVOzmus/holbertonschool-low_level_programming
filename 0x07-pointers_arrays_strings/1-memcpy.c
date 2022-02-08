#include "main.h"
/**
 * _memcpy - main function
 * @dest: first variable
 * @src: second variable
 * @n: third variable
 * Return: 0
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i <= n; i++)
	{
		src[i] = dest[i];
	}
	return (dest);
}
