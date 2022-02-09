#include "main.h"
/**
 * factorial - main function
 * @n: variable searching for factorial
 * Return: -1 if negative number, else returns 1
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
