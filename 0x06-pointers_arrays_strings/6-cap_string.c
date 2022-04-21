#include "main.h"
/**
 * cap_string - capitalizes words in a stirng
 * @s: the stirng in question
 * Return: the capitalized string
 */
char *cap_string(char *s)
{
	int i, j;

	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] = s[0] - 32;
	for (i = 0; s[i] != '\0'; i++)
	{
		j = i - 1;
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			if (s[j] == ' ' || s[j] == '.' || s[j] == '\n')
				s[i] = s[i] - 32;
			else if (s[j] == '?' || s[j] == '!' || s[j] == '\t')
				s[i] = s[i] - 32;
			else if (s[j] == ',' || s[j] == '}' || s[j] == '{')
				s[i] = s[i] - 32;
			else if (s[j] == ')' || s[j] == '(' || s[j] == ';' || s[j] == '\"')
				s[i] = s[i] - 32;
		}
		else
			continue;
	}
	return (s);
}
