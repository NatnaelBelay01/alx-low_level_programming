#include "main.h"
#include <stdlib.h>
/**
 * len - a function that retuns the lenth of a stirng
 * @s: the  string
 * Return: the length of  the stirng
 */
int len(char *s)
{
	int i = 0;

	if (s)
		while (s[i] != '\0')
		{
			i++;
		}
	return (i);
}
/**
 * str_concat - a function that concatenates two strings
 * @s1: the first string
 * @s2: the second
 * Return: a pointer to the new string formed by concatenating
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int i, j;

	j = len(s1) + len(s2);
	s = malloc(sizeof(char) * j + 1);
	if (s)
	{
		for (i = 0; s1[i] != '\0'; i++)
		{
			s[i] = s1[i];
		}
		for (j = 0; s2[j] != '\0'; j++)
		{
			s[i] = s2[j];
			i++;
		}
		s[i] = '\0';
		return (s);
	}
	return ('\0');
}
