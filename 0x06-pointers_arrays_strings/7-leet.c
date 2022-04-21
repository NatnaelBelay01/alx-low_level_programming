#include "main.h"
/**
 * leet - a function that is of little use if u ask me !
 * @s: what ever the checker decides to put in
 * Return: i dont even wanna talk about it
 */
char *leet(char *s)
{
	int i, j;
	char d[] = "AaEeOoTtLl";
	char b[] = "43071";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; d[j] != '\0'; j++)
		{
			if (s[i] == d[j])
			{
				s[i] = b[j / 2];
			}
		}
	}
	return (s);
}
