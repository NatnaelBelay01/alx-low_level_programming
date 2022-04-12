#include "main.h"
/**
 * print_alphabet_x10 - Prints the alphabet 10 times
 */
void print_alphabet_x10(void);
{
	int m;
	char n;

	for (m = 0; m < 10; m++)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		n = 'a';
		_putchar('\n');
	}
}
