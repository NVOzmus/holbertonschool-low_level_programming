#include "main.h"
/**
 * _sqrt - main function
 * @y: root
 * @x: base
 * Return: _sqrt
 */


int _sqrt(int x, int y)
{
	int sqrt = y * y;

	if (sqrt > x)
	return (-1);

	if (sqrt == x)
	return (y);

	return (_sqrt(x, y + 1));
}
/**
 * _sqrt_recursion - finds square root
 * @n: variable called for
 * Return: void
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 0));
}
