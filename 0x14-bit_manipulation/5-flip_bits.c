#include "main.h"

/**
 * flip_bits - a function that flips biits
 * @n: the first number
 * @m: the second
 * Return: the number of bits need to be flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int num1;
	unsigned int num2;

	num1 = n ^ m;
	num2 = 0;

	while (num1 != 0)
	{
		num2 = num2 + (num1 & 1);
		num1 = num1 >> 1;
	}
	return (num2);
}
