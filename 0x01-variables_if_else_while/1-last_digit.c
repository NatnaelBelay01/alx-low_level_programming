#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
 * main -this is the description for the main function
 * Return: retunrs 0(success)
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
m = n % 10;

if (n > 5)
{
	printf("Last digit of %d is %d and is greater than 5", n, m);
}
else if (n == 0)
{
	printf("Last digit of %d is 0 and is 0", n);
}
else
{
	printf("last digit of %d is %d and is less than 6 and not 0", n, m);
}	
return (0);
}
