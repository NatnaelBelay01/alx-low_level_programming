#include "main.h"

/**
 * get_bit - a function that gives the value of the bit at a given index
 * @n: number
 * @index: the index of the bit
 * Return: the bit value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bit;

	if (index > 32)
		return (-1);
	bit = 2 ^ index;
	if ((n & bit) >= 1)
		return (1);
	return (0);
}
