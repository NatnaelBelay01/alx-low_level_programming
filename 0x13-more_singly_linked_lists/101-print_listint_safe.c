#include "lists.h"

/**
 * print_listint_safe - a function that prints lists
 * @head: the head function
 * Return: the number of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *temp = head;
	size_t count = 0;

	while (temp != NULL)
	{
		printf("[%p] %d\n", (void *)(&(temp)), temp->n);
		temp = temp->next;
		count++;
		if (!(temp->next))
			exit (98);
	}
	return (count);
}
