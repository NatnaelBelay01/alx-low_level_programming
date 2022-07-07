#include "lists.h"

/**
 * len - a function that returns the maximum index in a list
 * @head: a pointer to the head
 * Return: the maximum index
 */
unsigned int len(dlistint_t *head)
{
	unsigned int count = 0;
	dlistint_t *temp = head;

	while (temp->next != NULL && temp != NULL)
	{
		temp = temp->next;
		count++;
	}
	return (count);
}
/**
 * insert_dnodeint_at_index - a function that inserts a node at the index
 * @h: a poiner to a pointer that points to the head node
 * @idx: the index of the node
 * @n: the data
 * Return: the address of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h, *new;

	if (*h == NULL || len(*h) < idx)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->prev = NULL;
		new->next = *h;
		(*h)->prev = new;
		*h = new;
		return (new);
	}
	while (idx > 0)
	{
		temp = temp->next;
		idx--;
	}
	new->prev = temp->prev;
	temp->prev->next = new;
	temp->prev = new;
	new->next = temp;
	return (new);
}
