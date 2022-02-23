#include "calc.h"

/*
 * op_add - addition operator
 * @a: first integer
 * @b: second integer
 * Return: result
 */

int op_add(int a, int b)
{
	int result = a + b;

	return (result);
}

/**
 * op_sub - subtraction operator
 * @a: first integer
 * @b: second integer
 * Return: difference
 */
int op_sub(int a, int b)
{
	int difference = a - b;

	return (difference);
}

/**
 * op_mul - multiplication operator
 * @a: first integer
 * @b: second integer
 * Return: product
 */

int op_mul(int a, int b)
{
	int product = a * b;

	return (product);
}

/**
 * op_div - divisiion operator
 * @a: first integer
 * @b: second integer
 * Return: dividend
 */

int op_div(int a, int b)
{
	int dividend = a / b;

	return (dividend);
}

/**
 * op_mod - modulus operator
 * @a: first integer
 * @b: second integer
 * Return: remainder
 */

int op_mod(int a, int b)
{
	int modulus = a % b;

	return (modulus);
}
