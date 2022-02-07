#include "holberton.h"
/**
 * _strcmp - main function
 * @s1: first variable
 * @s2: second variable
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] && s2[i]; i++)
	{
	if (s1[i] == s2[i])
		return 0;
	else if (s1[i] < (s2[i])
		return -1;
	else
		return 1;
	}
}

