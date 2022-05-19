#include "lists.h"
#include <string.h>

list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int count = 0;
	list_t *nod, *temp;

	while (str[count])
		count++;
	nod = malloc(sizeof(list_t));
	temp = malloc(sizeof(list_t));
	if(!(nod && temp))
		return (NULL);
	nod->str = strdup(str);
	nod->len = count;
	nod->next = NULL;
	if (*head == NULL)
	{
		*head = nod;
		return (*head);
	}
	temp = *head;
	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = nod;
	return (nod);
}
