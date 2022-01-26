#include "main.h"
/**
 * print_last_digit - main function
 * @d: function
 *
 * Return:0 
 */
int print_last_digit(int x)
{
	x = (x % 10);
	if (x>= 0)
	{
		_putchar('0' + x);
		return (x);
	}
	else if (n < 0)
	{
		n = (n* -1);
		_putchar('0' + n);
		return (n);
	}
		return (0)
}
