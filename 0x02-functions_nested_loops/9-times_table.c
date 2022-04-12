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
				_putchar(prd + '0');
				if (j < 9)
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
			}
			else
			{
				_putchar((prd / 10) + '0');
				_putchar((prd % 10) + '0');
				if (j < 9)
					_putchar(',');
					_putchar(' ');
			}
			j++;
		}
		j = 0;
		_putchar('\n');
		i++;
	}
}
