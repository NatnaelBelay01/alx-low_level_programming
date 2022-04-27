#include "main.h"
/**
 * _puts_recursion - prints stirngs
 * @s: the string
 */
void _puts_recursion(char *s)
{
	int n = 0;

	if (s[n] != '\0')
	{
		_putchar(s[n]);
		n++;
		_puts_recursion(s + n);
	}
	else if (s[n] == '\0')
	{
		_putchar('\0');
		_putchar('\n');
	}
}
