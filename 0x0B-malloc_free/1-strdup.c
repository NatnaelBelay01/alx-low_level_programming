#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * _strdup - a function that copies a string
 * @str: the string to be copied
 * Return: a pointer to the newly formed string
 */
char *_strdup(char *str)
{
	if (str)
	{
		int i, j;
		char *s;

		for (i = 2; str[i] != '\0'; i++)
			;
		s = malloc(i);
		if (s)
		{
			for (j = 0; str[j] != '\0'; j++)
			{
				s[j] = str[j];
			}
			s[j] = '\0';
			return (s);
		}
	}
	return ('\0');
}
