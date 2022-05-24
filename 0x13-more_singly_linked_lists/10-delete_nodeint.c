#include "lists.h"

/**
 * delete_nodeint_at_index - a function that deletes a node
 * @head: a poiner to the head node
 * @index: the index of the node to be deleted
 * Return: 1 if success -1 if fail
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *nvgt = *head, *nvgt1;

	if (head == NULL)
		return (-1);
	if (nvgt != NULL)
	{
		nvgt1 = (*head)->next;
		if (index == 0)
		{
			*head = nvgt1;
			free(nvgt);
			nvgt = NULL;
			return (1);
		}
		while (index > 1)
		{
			if (nvgt == NULL)
				return (-1);
			nvgt = nvgt->next;
			nvgt1 = nvgt1->next;
			index--;
		}
		nvgt->next = nvgt->next->next;
		free(nvgt1);
		nvgt1 = NULL;
		return (1);
	}
	*head = NULL;
	return (1);
}
