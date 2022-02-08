#include "main.h"
/**
 * _strspn - main function
 * @s: first variable
 * @accept: second variable
 * Return: 0
 */

unsigned int _strspn(char *s, char *accept)
{
	while (*s && *accept)
	{
		if (*s != *accept)
		{
			return (0);
		}
		s++;
		accept++;
	}
	return (*accept == '\0');
}
