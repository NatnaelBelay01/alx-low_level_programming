#include "main.h"
/**
 * puts2 - a function that prints characters
 * @str: the string
 */
void puts2(char *str)
{
	int i;

	for (i = 0; i < _strlen(str); i = i + 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
