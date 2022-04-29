#include "main.h"
/**
 * _isdigit - a function that checks for digit
 * @c: the variable to be checked
 * Return: 0 or 1
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
