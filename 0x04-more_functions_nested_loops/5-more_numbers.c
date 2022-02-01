#include "main.h"
/**
 * more_numbers - counts more numbers
 *
 * Return: 0
 */

void more_numbers(void)
{
	char numb;
	int count;

	for (count = 0; count < 10; count++)
	{
		for (numb = '0'; numb <= '14', numb++)
		{
			_putchar(numb);
		}
		_putchar('\n');
	}
}
