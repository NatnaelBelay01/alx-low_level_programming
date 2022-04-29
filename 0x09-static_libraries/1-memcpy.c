#include "main.h"
/**
 * _memcpy - a function that copies memory area from a source to a destination
 * @dest: the destination
 * @src: the source
 * @n: the numbers of the memory area to be copied
 * Return: the destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
