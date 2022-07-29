#include "hash_tables.h"

/**
 * ad_nod - a function that adds a node to the hash node
 * @head: the head of the linked list
 * @key: the key value
 * @value: the value to be stored
 * Return: a pointer to the head
 */
hash_node_t *ad_nod(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *temp = *head, *new;

	while (temp != NULL && temp->next != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			return (*head);
		}
		temp = temp->next;
	}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (NULL);
	new->key = strdup(key);
	new->value = strdup(value);
	if (new->key == NULL || new->value == NULL)
	{
		free(new);
		return (NULL);
	}
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	temp->next = new;
	return (*head);
}


/**
 * hash_table_set - a function that adds an element to the table
 * @ht: the hash table
 * @key: the key of the element
 * @value: the value that corresponds to the key
 * Return: 0 or 1
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;

	if (key != NULL && *key != '\0' && value != NULL && ht != NULL)
	{
		idx = key_index((const unsigned char *)key, ht->size);
		if (ad_nod(&(ht->array[idx]), key, value) != NULL)
			return (1);
		return (0);
	}
	return (0);
}
