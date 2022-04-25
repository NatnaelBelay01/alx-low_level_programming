#include "main.h"
/**
 * _strchr - returns the first occurrence of  the character c
 * @s: the string the be searched from
 * @c: the desired character
 * Return: a pointer to the first occurence
 */
char *_strchr(char *s, char c)
{
	char *res;
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			for (j = 0; s[j] != '\0'; j++)
			{
				res[j] = s[i];
				i++;
			}
			return (res);
		}
	}
	return (NULL);
}
