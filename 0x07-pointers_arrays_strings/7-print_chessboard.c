#include "main.h"
/**
 * print_chessboard - main function
 * @a: variable
 *
 * Return: 0
 */

{
	int x;
	int y;

	for (x = 0; a[x][7]; x++)
	{
		for (y = 0; y < 8; y++)
		{
			_putchar(a[x][y]);
		}
		_putchar('\n');
	}
}
