#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main -this is the main function
 * Return: 0 which means a success
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
	{
	printf("%d is positive", n);
	}
else if (n < 0)
{
	print("%d is negative", n);
}
else
{
	printf("%d is zero", n);
}
return (0);
}
