#include "main.h"
/**
 * sqrt2 - makes it possible to evaluate from 1 to n
 * @a: the number to be in place of n
 * @b: number that iterates from 1 to n
 * Return: 1 if sucess
 */
int sqrt2(int a, int b)
{
	if (b * b == a)
		return (b);
	else if (b * b > a)
		return (-1);
	return (sqrt2(a, b + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of n
 * @n: the number , duh
 * Return: the root
 */
int _sqrt_recursion(int n)
{
	return (sqrt2(n, 1));
}
