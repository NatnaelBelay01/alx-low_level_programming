#include <stdlib.h>
#include "main.h"
/**
 * create_array - a fucntion that creates an array
 * @size: the size of the array
 * @c: the character to be filled with
 * Return: a pointer to the newly created array
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size && malloc(sizeof(*s) * size))
	{
		s = malloc(sizeof(*s) * size);
		for (i = 0; i < size; i++)
		{
			s[i] = c;
		}
		return (s);
	}
	return ('\0');
}
