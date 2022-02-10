#include "main.h"
/**
 * _sqrt_recursion - main function
 * @n - variable for square root
 * Return: 0
 */
int _sqrt_recursion(int n)
{
	float temp;
	float squareroot;

	squareroot = n / 2;
	temp = 0;
	if (squareroot != temp)
	{
		temp = squareroot;
	}
	squareroot = (n / temp + temp) / 2;
}
return (squareroot);
}
