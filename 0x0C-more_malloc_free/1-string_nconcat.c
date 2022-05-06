#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - a function that concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * @n: the amount of bytes from s2
 * Return: a pointer to the result
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *s;

	s = malloc(sizeof(s1) + n);
	if (s1 == NULL && s2 == NULL)
		return (NULL);
	if (s2 == NULL || n == 0)
		return (s1);
	if (s1 == NULL)
	{
		for (i = 0; i < n && s2[i] != '\0'; i++)
		{
			s[i] = s2[i];
		}
		s[i] = '\0';
		return (s);
	}
	if (s != NULL)
	{
		for (i = 0; s1[i] != '\0'; i++)
		{
			s[i] = s1[i];
		}
		for (j = 0; j < n && s2[j] != '\0'; j++)
		{
			s[i] = s2[j];
			i++;
		}
		s[i] = '\0';
		return (s);
	}
	return ('\0');
}
