#include "main.h"
#include <stdio.h>
/**
 * print_array - prints the elements of an array
 * @a: the array
 * @n: the number of elements to be printed
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != 0)
		{
			_putchar(',');
			_putchar(' ');
		}
		printf("%d", a[i]);
	}
	_putchar('\n')
}
