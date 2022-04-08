#include <stdio.h>
/**
 * main -this is the description for main
 * Return: 0 (a success)
 */
int main(void)
{
	char pla;

	pla = 'z';
	while (pla >= 'a')
	{
		putchar(pla);
		pla--;
	}
	putchar('\n');
	return (0);
}
