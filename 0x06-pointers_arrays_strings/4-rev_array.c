#include "main.h"
/**
 * revrse_array - reverses an array
 * @a: the array
 * @n: the number of elements
 */
void revrse_array(int *a, int n)
{
	int temp, i, j;

	j = n - 1;
	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		j--;
	}
}
