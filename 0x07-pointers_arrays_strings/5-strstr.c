#include "main.h"
/**
 * _strstr - a function that does something boring
 * @haystack: a variable
 * @needle: another variable
 * Return: a pointer
 */
char *_strstr(char *haystack, char *needle)
{
	int x;

	if (*needle == 0)
		return (haystack);
	while (*haystack)
	{
		x = 0;
		if (haystack[x] == needle[x])
		{
			do {
				if (needle[x + 1] == '\0')
					return (haystack);
				x++;
			} while (haystack[x] == needle[x]);
		}
		haystack++;
	}
	return ('\0');
}
