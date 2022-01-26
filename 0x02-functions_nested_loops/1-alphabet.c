#include "main.h"

/**
 * main - runs the program
 *
 * _putchar - places character in code
 *
 * Return: 0 and closes the code
 */

int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		_putchar(alpha);
	_putchar('\n');
	return (0);
}
