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
	int i = 0, j = 0;

	if(dest == NULL & scr == NULL)
		return NULL;
	while (src[j] != '\0')
	{
		j++;
	}
	if (j > n)
	{
		while (n > 0)
		{
			dest[i] = src[i];
			i++;
			n--;
		}
	}
	else
	{
		while (src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		while (i < n)
		{
			dest[i] = src[i];
			i++;
		}
	}
	return (dest);
}
