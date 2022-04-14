#include "main.h"
/**
 * print_square - prints a square
 * @size: the size of the square to be printed
 */
void print_square(int size)
{
	int i = 0, j = 0;

	if (size > 0)
	{
		while (j < size)
		{
			while (i < size)
			{
				_putchar('#');
				i++;
			}
			i = 0;
			j++;
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
