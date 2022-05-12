#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - a function that prints numbers
 * @separator: the character that goes in between the numbers
 * @n: the number of arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int count;
	va_list lst;

	va_start(lst, n);
	if (n != 0)
	{
		for (count = 0; count < n - 1; count++)
		{
			printf("%d%s", va_arg(lst, int), separator);
		}
		printf("%d", va_arg(lst, int));
		va_end(lst);
	}
	printf("\n");
}
