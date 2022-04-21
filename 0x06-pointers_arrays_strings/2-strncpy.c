#include "main.h"
/**
 * _strncpy - a function that copies a string
 * @dest: the destination
 * @src: the source
 * @n: bytes
 * Return: copied file
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (i = 0; src[i] != '\0' && i < n; i++)
		dest[i] = src[i];
	while(i < n)
		dest[i++] = '\0';
	return (dest);
}
