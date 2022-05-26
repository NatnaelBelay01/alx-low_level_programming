#include "main.h"

/**
 * set_bit - a function that sets a bit at a certian index
 * @n: a pointer to the number
 * @index: the index
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
		return (-1);
	*n = *n & ~(1 << index);
	return (1);
}
