#include "main.h"
/**
 * print_number - prints numbers
 * @n: the number to be printed
 */
void print_number(int n)
{
	if (n >= -9 && n <= 9)
	{
		if (n >= -9 && n < 0)
		{
			_putchar('-');
			_putchar('0' + (-1 * n));
		}
		else if (n <= 9 && n > 0)
		{
			_putchar('0' + n);
		}
		else
			_putchar('0');
	}
	else if (n >= -99 && n <= 99)
	{
		if (n >= -99 && n <= -10)
		{
			_putchar('-');
			_putchar('0' + (-1 * (n / 10)));
			_putchar('0' + (-1 * (n % 10)));
		}
		else if (n >= 10 && n <= 99)
		{
			_putchar('0' + (n / 10));
			_putchar('0' + (n % 10));
		}
	}
	else if (n >= -999 && n <= 999)
	{
		if (n >= -999 && n <= -100)
		{
			_putchar('-');
			_putchar('0' + (-1 * (n / 100)));
			_putchar('0' + (-1 * ((n % 100) / 10)));
			_putchar('0' + (-1 * (n % 10)));
		}
		else if (n > 100 && n <= 999)
		{
			_putchar('0' + (n / 100));
			_putchar('0' + ((n % 100) / 10));
			_putchar('0' + (n % 10));
		}
	}
	else
	{
		if (n <= -1000)
		{
			_putchar('-');
			_putchar('0' + (-1 * (n / 1000)));
			_putchar('0' + (-1 * (n % 1000) / 10));
			_putchar('0' + (-1 * (n % 100) / 10));
			_putchar('0' + (-1 * (n % 10)));
		}
		else
		{
			_putchar('0' + (n / 1000));
			_putchar('0' + ((n % 1000) / 10));
			_putchar('0' + ((n % 100) / 10));
			_putchar('0' + (n % 10));
		}
	}
}
