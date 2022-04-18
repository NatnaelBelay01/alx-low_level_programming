#include "main.h"
/**
 * _puts - a function that sprints strings to std out put
 * @str: the string to be printed out
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
