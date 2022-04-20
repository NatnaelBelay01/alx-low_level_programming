#include "main.h"
/**
 * _strcmp - a function that compares two strings
 * @s1: the first string to be compared
 * @s2: the second string
 * Return: a positve or a negative number
 */
int _strcmp(char *s1, char *s2)
{
	int i = sizeof(s1) / sizeof(char), j = sizeof(s2) / sizeof(char), dif = 0, total = 0;
	if (i == j)
	{
		i = 0;
		while (s1[i] != 0)
		{
			dif = s1[i] - s2[i];
			total = total + dif;
			if (dif != 0)
				break;
			i++;
		}
	}
	else
	{
		if (i < j)
		{
			j = 0;
			while (s1[j] != '\0')
			{
				dif = s1[j] - s2[j];
				total = total + dif;
				if (dif != 0)
					return (total);
				j++;
			}
			return (2);
		}
		else
		{
			i = 0
				while (s1[i] != '\0')
				{
					dif = s1[i] - s2[i];
					total = total + dif;
					if (dif != 0)
						return (total);
					i++;
				}
			return (-2);
		}
	}
	return (dif);
}
