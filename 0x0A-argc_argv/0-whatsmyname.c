#include <stdio.h>
/**
 * main - prints the name of the file
 * @argc: the size of @argv
 * @argv: the array of size @argc
 * Return: 0
 */
int main(int argc, char *argv[])
{
	printf("%s \n", argv[argc - 1]);
	return 0;
}
