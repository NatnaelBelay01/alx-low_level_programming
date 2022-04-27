#include "main.c"
/**
 * factorial - a function that returns the factorial of a number
 * @n: the number
 * Return: the factorial or -1
 */
int factorial(int n)
{
	if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	else if (n == 0)
	{
		return (1);
	}
	return (-1);
}
