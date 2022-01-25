#include <stdio.h>

/**
 * main - starts program
 *
 * * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i);
		if (i != 9)
		{
			putchar(44);
			putchar(' ');
		}
	}
	return (0);
}
