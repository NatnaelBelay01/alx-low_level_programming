#include <stdio.h>
/**
 * main -the discription for the main function
 * Return: returns 0
 */
int main(void)
{
	int num1 = 48, num2 = 49;

	while (num1 < 57)
	{
		while (num2 <= 57)
		{
			if (num1 < num2)
			{
				putchar(num1);
				putchar(num2);
				if ((num1 + num2) != 113)
				{
					putchar(',');
					putchar(' ');
				}
			}
			num2++;
		}
		num2 = 48;
		num1++;
	}
	putchar('\n');
	return (0);
}
