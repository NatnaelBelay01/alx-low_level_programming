#include <stdio.h>
/**
 * main - prints the number of arguments passed
 * @argc: the number of arrguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	printf("%d \n", argc - 1);
	argv[0] = "0";
	return (0);
}
