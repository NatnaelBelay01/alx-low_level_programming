#include "main.h"
/**
 * _pow_recursion - a fucntion that raises number x by y
 * @x: the base
 * @y: the exponent
 * Return: the product ig or -1
 */
int _pow_recursion(int x, int y)
{
	if (y > 0)
	{
		return (x * _pow_recursion(x, (y - 1)));
	}
	else if (y == 0 && x != 0)
	{
		return (1);
	}
	else
		return (-1);
}
