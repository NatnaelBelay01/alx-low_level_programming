#include "main.h"
/**
 * more_numbers - prints numbes
 */
void more_numbers(void)
{
	int count, tn;

	for (tn = 0; tn < 10; tn++)
	{
		int i = 48, j = 48;

		for (count = 0; count < 15; count++)
		{
			if (count < 10)
			{
				_putchar(i);
				i++;
			}
			else
			{
				_putchar('1');
				_putchar(j);
				j++;
			}
		}
	putchar('\n');
	}
}
