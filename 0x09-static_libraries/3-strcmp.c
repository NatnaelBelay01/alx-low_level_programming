#include "main.h"
/**
 * _strcmp - a function that compares two strings
 * @s1: the first string to be compared
 * @s2: the second string
 * Return: a positve or a negative number
 */
int _strcmp(char *s1, char *s2)
{
	int i, j = 0, k = 0;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		j = s1[i] - s2[i];
		k = k + j;
		if (j != 0)
			return (j);
	}
	while (s1[j] != '\0')
	{
		j++;
	}
	while (s2[k] != '\0')
	{
		k++;
	}
	if (j != k)
	{
		if (j > k)
			return (2);
		else
			return (-2);
	}
	return (0);
}
