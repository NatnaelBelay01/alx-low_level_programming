#include "main.h"
/**
 * main - the entry point of the programm
 * Return: returns 0
 */
int main(void)
{
	char kar[] = "_putchar";
	int num;

	for (num = 0; num < 8; num++)
	{
		_putchar(kar[num]);
	}
	_putchar('\n');
	return (0);
}
