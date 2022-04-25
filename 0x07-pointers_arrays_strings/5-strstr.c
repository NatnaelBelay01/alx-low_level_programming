#include "main.h"
/**
 * _strstr - a function that does something boring
 * @haystack: a variable
 * @needle: another variable
 * Return: a pointer
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;
	for (i = 0; needle[i] != '\0'; i++)
	{
		for (j = 0; haystack[j] != '\0'; j++)
		{
			if (needle[i] == haystack[j])
				return (haystack + j);
		}
	}
	return ('\0');
}
