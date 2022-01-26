#include "main.h"
/**
 * _islower - checks for lowercase character
 *
 * Return: 0, closes
 */
int _islower(int c)
{

	if (c >= 'a' and c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
