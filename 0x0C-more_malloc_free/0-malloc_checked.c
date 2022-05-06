#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - a function that returns a pointer
 * @b: the sie of the pointer
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);
	if (s == NULL)
		exit(98);
	return (s);
}
