#include "main.h"
/**
 * _strcpy - main function
 *@src: 
 *
 * Return: 0
 */

char *_strcpy(char *dest, char *src)
{
	size_t i;
	

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i;  i++)
	{
		dest[i] = '\0';
	}
	return (*dest);
}
