#include "main.h"
/**
 * times_table - a function that prints 9 times table
 */
void times_table(void)
{
	int i = 0, j = 0, prd;

	while (i <= 9)
	{
		while (j <= 9)
		{
			prd = i * j;
			if (prd <= 9)
			{
				if (j <= 9 && j != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(prd + '0')
			}
			else
			{
				if (j <= 9)
				{
					_putchar(',');
					_putchar(' ');
				}
				_putchar((prd / 10) + '0');
				_putchar((prd % 10) + '0');
			}
			j++;
		}
		j = 0;
		_putchar('\n');
		if (i < 9)
			_putchar('\n');
		i++;
	}
}
