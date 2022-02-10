#include "main.h"

/**
 * is_prime_number - main function
 * @n: int being counted
 * Return: 0
 */

int is_prime_number(int n)
{
	if (n <=1)
	{
		return (0);
	}
	if (n >= 2 && n <=3)
	{
		return (1);
	}
	return (_prime_calc(2, n));
}

/**
 * _prime_calc - start function
 * @x: first int
 * @num: second int
 * Return: 0
 */

int _prime_calc(int x, int num)
{
	if (num % x == 0)
	{
	return (0);
	}
	if (x == /2)
	{
	return (1);
	}
	return (_prime_calc(x + 1, num));
}
