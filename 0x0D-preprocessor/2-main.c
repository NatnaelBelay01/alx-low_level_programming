#include <stdlib.h>
/**
 * main - the main fucntion
 * Return: always o
 */
int main(void)
{
	char *s = __FILE__;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	_putchar ('\n');
	return (0);
}
