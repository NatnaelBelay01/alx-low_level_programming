#include "main.h"
/**
 * print_triangle - a function that prints a triangle
 * @size: the size of the triangle
 */
void print_triangle(int size)
{
	int i, k, r;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (k = (size - i); k > 1; k--)
			{
				_putchar(' ');
			}
			for (r = 0; r <= i; r++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
