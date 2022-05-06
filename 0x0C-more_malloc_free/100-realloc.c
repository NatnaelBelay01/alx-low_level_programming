#include "main.h"
#include <stdlib.h>
/**
 * cpy - a function that copies the contents of a string to another string
 * @src: the source
 * @des: the destination
 * return: destination
 */
char *cpy(char *src, char *des)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		des[i] = src[i];
	}
	return (des);
}

/**
 * _realloc - a function that reallocates memory
 * @ptr: a pointer that holds a previously allocated memory
 * @old_size: the size of ptr b4 reallocation
 * @new_size: the size of ptr after reallocation
 * Return: the reallocated value
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *arr;

	if (new_size > old_size)
	{
		arr = malloc(new_size);
		cpy(ptr, arr);
		free(ptr);
		return (arr);
	}
	if (new_size != 0 && new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}
	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	return (NULL);
}
