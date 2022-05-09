#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * print_dog - prints a structure
 * @d: the variable of struct type to be printed
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	(*d).name != NULL ? printf("Name: %s\n", (*d).name) : printf("(nill)\n");
	printf("Age: %f\n", (*d).age);
	(*d).owner != NULL ? printf("Owner: %s\n", (*d).owner) : printf("(nill)\n");
}
