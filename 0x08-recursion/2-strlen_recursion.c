#include "main.h"
/**
 * _strlen_recursion - a function that returns the length of a stirng
 * @s: the string
 * Return: the lenght of the string
 */
int _strlen_recursion(char *s)
{
	int sum;

	if (*s != 0 && *(s + 1) != 0)
		sum = _strlen_recursion(s) + _strlen_recursion(s + 1);
	else
		return (1);
	return (sum);
}
