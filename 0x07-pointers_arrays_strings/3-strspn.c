#include "main.h"
/**
 * _strspn - a function that returns the length of a prefix substring
 * @s: the string
 * @accept: who even cares, its not like anybody is gonna read this
 * Return: it returns pain
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i, j;

	for (i = 0; s[i] != ' '; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
			}
		}
	}
	return (count);
}
