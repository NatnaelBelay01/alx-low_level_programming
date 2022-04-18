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

	while (n < _strlen(src))
	{
		dest[n] = src[n];
		n++;
	}
	dest[n + 1] = '\0';
	return (dest);
}
