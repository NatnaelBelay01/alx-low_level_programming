#include <stdio.h>
/**
 * main - the main function
 * @argv: the array of arguments
 * @argc: the size of argv
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s", argv[i]);
		putchar('\n');
	}
	return (0);
}
