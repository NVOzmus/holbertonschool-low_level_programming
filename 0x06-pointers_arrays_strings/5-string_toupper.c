#include "holberton.h"
/**
 * string_toupper - main function
 *@a: variable
 *
 * Return: 0
 */

char *string_toupper(char *a)
{
	int i;

	for (i = 0; i != '\0'; i++)
	if (a[i] >= 'a' && a[i] <= 'z')
	{
		a[i] = a[i] - 32;
	}
	return (0);
}
