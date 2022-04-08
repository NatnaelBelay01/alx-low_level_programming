#include <stdio.h>
/**
 * main -The discription for main
 * Return: 0 (success)
 */
int main(void)
{
	int num, num1;

	num1 = 0;
	for (num = 48; num <= 57; num++)
	{
		putchar(num);
		num1++;
		if (num1 < 10)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
