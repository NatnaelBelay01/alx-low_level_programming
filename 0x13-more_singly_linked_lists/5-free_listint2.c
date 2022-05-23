#include "lists.h"

/**
 * free_listint2 - a function that frees lists
 * @head: the head pointer
 */

void free_listint2(listint_t **head)
{
	listint_t *temp, *temp2;

	temp = *head;
	*head = NULL;
	while (temp->next)
	{
		temp2 = temp->next;
		free(temp);
		temp = temp2;
	}
	free(temp2);
}
