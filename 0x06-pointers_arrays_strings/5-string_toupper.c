#include "main.h"
/**
 * string_toupper - a function that changes all letter to upper case
 * @s: the stirng
 * Return: the string
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != 0)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
			i++;
		}
		else
		{
			i++;
			continue;
		}
	}
	return (s);
}
