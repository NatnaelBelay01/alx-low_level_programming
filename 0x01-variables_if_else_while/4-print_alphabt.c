#include <stdio.h>
/**
 * main -this is the description for the main function
 * Return: 0(success)
 */
int main(void)
{
	char alp = 'a';

	while (alp <= 'z')
	{
		if (alp != 'q' && alp != 'e')
		{
			putchar(alp);
			alp++;
		}
		else
		{
			alp++;
		}
	}
	putchar('\n');
	return (0);
}
