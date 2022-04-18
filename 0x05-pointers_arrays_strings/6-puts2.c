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
/**
 * _strlen - a function taht returns the length of a string
 * @s: the string to be measured
 * Return: alwyas 0
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

