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
		printf("the last digit of %d is ", n);
if (LastDigit > 5)
{
	printf("%d and is greater than 5\n", LastDigit);
}
else if (LastDigit == 0)
{
	printf("%d and is 0\n", LastDigit);
}
else
{
	printf("%d and is less than 6 and not 0\n", LastDigit);
}
		return (0);
}
