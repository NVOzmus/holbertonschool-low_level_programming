#include "holberton.h"
/**
 * reverse_array - main function
 * @a: 
 * @n:
 *
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int string;
	char reverse;

	for (n = 0; a[n] != '\0'; n++)
	{
		continue;
	}
	for (string = n - 1; string >= n / 2; n--)
	{
		reverse = a[string];
		a[string] = a[n - string - 1];
		a[n - n -1] = reverse;
	}
}
