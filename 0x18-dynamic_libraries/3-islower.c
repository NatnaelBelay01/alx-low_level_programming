#include "main.h"
/**
 * _islower - checks for lower case character
 * @c: the charcter to be checked
 * Return: 1 if true 0 if false
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
