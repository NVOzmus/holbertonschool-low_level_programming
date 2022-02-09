#include "main.h"
/**
 * _pow_recursion - main function
 * @x: first variable
 * @y: second variable, to power of
 *
 * Return: 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if ( y == 0)
	{
		return (1);
	}
	if (y) 
	{
		return (x * _pow_recursion(x, y-1));
	}
	return (x);
}
