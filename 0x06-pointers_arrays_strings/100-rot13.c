#include "main.h"
/**
 * rot13 - a function that can cipher or decipher stuff
 * @s: the string in question
 * Return: the ciphered or deciphered string
 */
char *rot13(char *s)
{
	char a[53] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[53] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; a[j] != '\0'; j++)
		{
			if (a[j] == s[i])
			{
				s[i] = b[j];
				break;
			}
		}
	}
	return (s);
}
