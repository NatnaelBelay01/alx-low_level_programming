#include "main.h"
/**
 * print_last_digit - prints the last digit
 * @n: the number to be checked
 * Return: returns the last digit
 */
int print_last_digit(int n)
{
	kar = n % 10;
	if (kar < 0)
		kar = kar * -1;
	_putchar(kar + '0');
	return (kar);
}
