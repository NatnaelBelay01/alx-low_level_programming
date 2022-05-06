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
	int *arr, i = 0, t = min;

	if (min > max)
		return (0);
	arr = malloc((max - min + 1) * sizeof(int));

	if (!arr)
		return (0);
	while (i <= max - min)
		arr[i++] = t++;
	return (arr);
}
