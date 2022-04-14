#include "main.h"
/**
 * print_diagonal - prints a diagonal line
 * @n: the length of the diagonal
 */
void print_diagonal(int n)
{
	int i = 0, j = 0;

	if (n <= 0)
		_putchar('\n');
	while (j < n)
	{
		while (i < j)
		{
			_putchar(' ');
			i++;
		}
		i = 0;
		_putchar('\\');
		j++;
		_putchar('\n');
	}
}
