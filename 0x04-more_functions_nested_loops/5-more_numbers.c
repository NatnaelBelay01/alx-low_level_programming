#include "main.h"
/**
 * more_numbers - prints numbes
 */
void more_numbers(void)
{
	int n = 0, m = 0, k, j;

	while (n < 10)
	{
		while (m < 15)
		{
			if (m < 10)
			{
				j = m;
			}
			else
			{
				k = m / 10;
				j = m % 10;
				_putchar('0' + k);
			}
			_putchar('0' + j);
			m++;
		}
		_putchar('\n');
		m = 0;
		n++;
	}
}
