#include "main.h"
/**
 * print_numbers - prints number 0-9
 *
 * Return: 0
 */
void print_numbers(void)
{
	char number;
	int count;

	for (count = '0'; count <= '9'; count++)
	{
		if (count =='2' || count == '4')
		{
			break;
		}
		else
		{
			_putchar(count);
		}
}
