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
	for (count = 0; count < n; count++)
	{
		if (count > 0)
			printf("%s", separator);
		printf("%d", va_arg(lst, int));
	}
	if (n != 0)
		putchar('\n');
	va_end(lst);
}
