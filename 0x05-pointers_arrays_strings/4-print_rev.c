#include "main.h"
/**
 * print_rev - prints in reverse
 * @s: the string to be printed
 */
void print_rev(char *s)
{
	int i = _strlen(s);

	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
