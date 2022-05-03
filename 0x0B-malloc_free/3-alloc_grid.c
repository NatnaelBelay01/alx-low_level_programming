#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - a function that creates a multi-dimensional array
 * @width: the width of the array
 * @height: the height of the array
 * Return: a pointer to the array
 */
int **alloc_grid(int width, int height)
{
	int j, k;
	int **i;

	if (width > 0 && height > 0)
	{
		i = malloc(height * sizeof(int *));
		if (i)
		{
			for (j = 0; j < height; j++)
			{
				i[j] = malloc(width * sizeof(int *));
				if (!i[j])
				{
					while (j >= 0)
					{
						free(i[j]);
						j--;
					}
					free(i);
					return ('\0');
				}
			}
			if (i)
			{
				for (j = 0; j < height; j++)
				{
					for (k = 0; k < width; k++)
					{
						i[j][k] = 0;
					}
				}
			return (i);
			}
		}
		free(i);
		return ('\0');
	}
	return ('\0');
}
