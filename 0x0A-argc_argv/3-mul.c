#include <stdio.h>
#include <stdlib.h>
/**
 * main - the main function
 * @argc: the size of argv
 * @argv: an array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, prod = 1;

	if (argc > 2)
	{
		for (i = 1; i < argc; i++)
		{
			prod = prod * atoi(argv[i]);
		}
		printf("%d", prod);
	}
	else
	{
		printf("Error");
		putchar('\n');
		return (1);
	}
	putchar('\n');
	return (0);
}
