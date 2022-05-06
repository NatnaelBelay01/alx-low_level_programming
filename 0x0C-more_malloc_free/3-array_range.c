#include "main.h"
#include <stdlib.h>
/**
 * array_range - a function that fills an array with a certain range
 * @min: the minimum value
 * @max: the maximum value
 * Return: the array
 */
int *array_range(int min, int max)
{
	int i = 0;
	int *k;

	if (min > max)
		return (NULL);
	k = malloc((1 + (max - min)) * sizeof(*k));
	if (k != NULL)
	{
		k[0] = min;
		while (k[i] <= max)
		{
			i++;
			k[i] = min + i;
		}
		return (k);
	}
	return (NULL);
}
