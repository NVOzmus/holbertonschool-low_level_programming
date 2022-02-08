#include "main.h"
/**
 * _strspn - main function
 * @s: first variable
 * @accept: second variable
 * Return: 0
 */

unsigned int _strspn(char *s, char *accept)
{
	const char *s = s1;
	const char *c;

	while (*s1)
	{
		for (c = s2; *c; c++)
		{
			if (*s1 == *c)
				break;
		}
		if (*c == '\0')
			break;
		s1++;
	}

	return s1 -s;
}
