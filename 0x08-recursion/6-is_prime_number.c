#include "main.h"
/**
 * fun - makes it possible to test different values
 * @a: in place of n
 * @b: it iterating value
 * Return: 1 or -1
 */
int fun(int a, int b)
{
	if (a % b == 0 || a <= 1)
		return (0);
	else if (b >= (a / 2 + 1))
		return (1);
	return (fun(a, b + 1));
}
/**
 * is_prime_number - checks whether a number is prime or not
 * @n: the number to be checked
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	return (fun(n, 2));
}
