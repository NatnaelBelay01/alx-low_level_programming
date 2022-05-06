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

	if (s2 == NULL)
		return (s1);
	s = malloc(sizeof(*s1) + n);
	if (s != NULL)
	{
		for (i = 0; s1[i] != '\0'; i++)
		{
			s[i] = s1[i];
		}
		for (j = 0; j < n && s[j] != '\0'; j++)
		{
			s[i] = s2[j];
			i++;
		}
		s[i] = '\0';
		return (s);
	}
	return ('\0');
}
