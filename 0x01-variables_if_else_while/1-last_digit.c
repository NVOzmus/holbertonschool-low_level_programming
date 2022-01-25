#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - a description of main
 *
 * Return: 0
 */

int main(void)
{
		int n, LastDigit;

		srand(time(0));
		n = rand() - RAND_MAX / 2;
		LastDigit = n % 10;
		printf("the last digit of %d is", n);
if (LastDigit > 5)
{
	printf("and is greater than 5\n");
}
else if (LastDigit == 0)
{
	printf("and is 0\n");
else
{
	printf("is less than 6 and not 0\n");
}
		return (0);
}
