#include "main.h"
/**
 * _strncat - a function that appends a strings
 * @dest: the destination
 * @src: the source
 * @n: the number of bytes
 * Return: the destination
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < n)
	{
		if (src[j] == '\0')
			break;
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
