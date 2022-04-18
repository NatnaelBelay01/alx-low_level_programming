#include "main.h"
/**
 * swap_int - swaps two variables
 * @a: the first variable
 * @b: the second variable
 */
void swap_int(int *a, int *b)
{
	int temp1 = *b, temp2 = *a;
	*b = temp2;
	*a = temp1;
}
