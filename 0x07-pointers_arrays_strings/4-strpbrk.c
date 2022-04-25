#include "main.h"
/**
 * _strpbrk - a function that locates the first occurence of a string
 * @s: the first argument
 * @accept: the second argument
 * Return: a pointer
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}
	return ('\0');
}
