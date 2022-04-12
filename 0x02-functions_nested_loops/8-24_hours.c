#include "main.h"
/**
 * jack_bauer - a function that prints 24 hours
 */
void jack_bauer(void)
{
	int m, n, i, j;

	for (m = 48; m <= 50; m++)
	{
		for (n = 48; n <= 51; n++)
		{
			for (i = 48; i <= 53; i++)
			{
				for (j = 48; j <= 57; j++)
				{
					_putchar(m);
					_putchar(n);
					_putchar(':');
					_putchar(i);
					_putchar(j);
					_putchar('\n');
				}
			}
		}
	}
}
