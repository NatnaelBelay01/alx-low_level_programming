#include "lists.h"

/**
 * Print_listint - a function that prints the elements of a list
 * @h: points to the head
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	if (h != NULL)
	{
		while (h != NULL)
		{
			printf("%d\n", h->n);
			count++;
			h = h->next;
		}
	}
	else
		printf("nil\n");
	return (count);
}
