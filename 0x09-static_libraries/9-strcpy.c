#include "main.h"
/**
 * _strcpy - a function that copies the contents of an array
 * @dest: the destination
 * @src: the source
 * Return: destination
 */
char *_strcpy(char *dest, char *src)
{
	int n = 0;

	while (n < _strlen(src) + 1)
	{
		dest[n] = src[n];
		n++;
	}
	return (dest);
}

/**
 * _strlen - a function taht returns the length of a string
 * @s: the string to be measured
 * Return: alwyas 0
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
