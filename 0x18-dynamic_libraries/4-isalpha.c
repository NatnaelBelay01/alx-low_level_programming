#include "main.h"
/**
 * _isalpha - a dunction that checks for capital or small letters
 * @c: the character to be checked
 * Return: returns 1 if success 0 if fail
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
