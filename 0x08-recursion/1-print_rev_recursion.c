#include "main.h"
/**
 * _print_rev_recursion - main function
 * @s: variable being called on
 *
 * Return: 0
 */

void _print_rev_recursion(char *s)
{

	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
