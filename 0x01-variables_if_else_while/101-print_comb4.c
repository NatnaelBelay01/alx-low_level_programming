#include <stdio.h>
/**
 * main -this is the discription for main
 * Return: 0 (a success)
 */
int main(void)
{
	int num1 = 48, num2 = 49, num3 = 50;

	while (num1 < 56)
	{
		while (num2 < 57)
		{
			while (num3 <= 57)
			{
				if ((num2 < num3) && (num1 < num2))
				{
					putchar(num1);
					putchar(num2);
					putchar(num3);
				}
				if ((num1 + num2 + num3) != 24)
				{
					putchar(',');
					putchar(' ');
				}
				num3++;
			}
			num3 = 48;
			num2++;
		}
		num2 = 48;
		num1++;
	}
	return (0);
}
