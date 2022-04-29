#include <stdio.h>
#include <stdlib.h>
/**
 * main - the main function
 * @argc: the size of argv
 * @argv: the array of arguments
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int i = 1, sum = 0;

	while (i < argc)
	{
		if (!(atoi(argv[i])))
		{
			printf("Error");
			putchar('\n');
			return (1);
		}
		i++;
	}
	if (argc >= 1)
	{
		for (i = 1; i < argc; i++)
		{
			sum = sum + atoi(argv[i]);
		}
	}
	printf("%d", sum);
	putchar('\n');
	return (0);
}
