#include "main.h"
/**
 * _strpbrk - main function
 * @s: first variable
 * @n: second variable
 *
 * Return: 0
 */

char *_strpbrk(char *s, char *accept)
{
	int x;

	do {
		for (x = 0; s[x] != '\0'; x++)
		{
			if (accept[x] != '\0')
			{
				return (s);
			}
		}
		s++
	} while (*s != '\0');
	return (0);
}
