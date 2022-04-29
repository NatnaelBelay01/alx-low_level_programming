#include <stdio.h>
/**
 * main - prints the name of the file
 * @argc: the size of @argv
 * @argv: the array of size @argc
 * Return: 0
 */
int main(int argc, char *argv[])
{
	printf("%s", argv[argc - 1]);
	putchar('\n');
	return (0);
}
