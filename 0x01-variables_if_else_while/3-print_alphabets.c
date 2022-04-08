#include <stdio.h>
/**
 * main -this is the discription for main
 * Return: returns 0(success !)
 */
int main(void)
{
	char a = 'a';
	char b = 'A';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	while (b <= 'Z')
	{
		putchar(b);
		b++;
	}
	putchar('\n');
return (0);
}
