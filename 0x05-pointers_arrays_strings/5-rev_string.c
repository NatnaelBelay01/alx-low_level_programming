#include "main.h"
/**
 * rev_string - reverses strings
 * @s: the string to be reversed
 */
void rev_string(char *s)
{
	int n = _strlen(s) - 1, j = 0;
	char i;

	while (j < n)
	{
		i = *(s + j);
		*(s + j) = *(s + n);
		*(s + n) = i;
		j++;
		n--;
	}
}
/**
 * _strlen - a function taht returns the length of a string
 * @s: the string to be measured
 * Return: alwyas 0
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

