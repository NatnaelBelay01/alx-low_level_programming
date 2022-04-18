#include "main.h"
/**
 * puts_half - a function that prints half of the string
 * @str: the string to be printed
 */
void puts_half(char *str);
{
	int n = _strlen(str);

	if (n % 2 == 0)
	{
		n = _strlen(str) / 2;
		while (n < _strlen(str))
		{
			_putchar(str[n]);
			n++;
		}
	}
	else
	{
		n = _strlen(str) / 2 + 1;
		while (n < _strlen(str))
		{
			_putchar(str[n]);
			n++;
		}
	}
	_putchar('\n');
}
