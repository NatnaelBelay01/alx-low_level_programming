#include "main.h"

/**
 * main - the main function
 * @argc: the count of arguments
 * @argv: array of pointers
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	int fdf, fdt, buf_red, buf_rot, clsf, clst;
	char buf[BUFSIZ];
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fdf = open(argv[1], O_RDONLY);
	buf_red = read(fdf, buf, BUFSIZ);
	if (fdf < 0 || buf_red < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fdt = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	buf_rot = write(fdt, buf, buf_red);
	if (fdt < 0 || buf_rot < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	clsf = close(fdf);
	clst = close(fdt);
	if (clsf < 0 || clst < 0)
	{
		if (clsf < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdf);
		if (clst < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdt);
		exit(100);
	}
	return (0);
}
