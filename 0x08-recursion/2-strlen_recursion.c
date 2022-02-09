#include "main.h"
/**
 * _strlen_recursion - main function
 * @s: primary variable
 *
 * Return: 0
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0');
	{
	return (*s);
	}
	return (1 + _strlen_recursion(s + 1));
}
