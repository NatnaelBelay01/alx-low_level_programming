#include "main.h"
#include <stdlib.h>
/**
 * _memset - a function that copies a character
 * @s: string
 * @b: the character to be copies to s
 * @n: the size of s
 * Return: string
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
/**
 * _calloc - a function that creates an array
 * @nmemb: the number of members
 * @size: the size of each memeber
 * Return: a void pointer to the array created
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *s;

	if (nmemb == 0 || size == 0)
		return (NULL);
	s = malloc(nmemb * size);

	if (s == NULL)
		return (NULL);
	_memset(s, 0, (nmemb * size));
	return (s);
}
