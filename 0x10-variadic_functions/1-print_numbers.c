#include "variadic_functions.h"

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	unsigned int num;

	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		printf ("%d", va_arg(v1, int));
		if (i < (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}
