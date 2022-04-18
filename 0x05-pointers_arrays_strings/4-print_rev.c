#include "main.h"
/**
 * print_rev - prints in reverse
 * @s: the string to be printed
 */
void print_rev(char *s)
{
	int i = _strlen(s) - 1;

	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
#include "main.h"
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
