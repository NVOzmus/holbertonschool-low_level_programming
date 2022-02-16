#include "main.h"
/**
 * _strdup - main function
 * @str: the string pointed to
 *Return: NULL, or pointer to a new string
 */
char *_strdup(char *str)
{
	char *ptr;
	unsigned int x, strlen = 0;
	
	if (str == 0)
	{
		return (NULL);
	}
	while (str[strlen])
	{
		strlen++;
	}
	strlen++;

	ptr = malloc(sizeof(char) * strlen);

	if (ptr == 0)
	{
		return (Null);
	}
	for (x = 0; x < strlen; x++)
	{
		ptr[x] = str[x];
	}
	return (ptr);
}
}
