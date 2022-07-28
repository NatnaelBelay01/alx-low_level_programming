#include "hash_tables.h"

/**
 * hash_table_set - a function that adds an element to the table
 * @ht: the hash table
 * @key: the key of the element
 * @value: the value that corresponds to the key
 * Return: 0 or 1
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx = key_index((const unsigned char *)key, ht->size);
	hash_node_t *temp, *new;
	char *cval = strdup(value), *ckey = strdup(key);

	if (key == NULL && *key != '\0' && value != NULL && ht != NULL)
	{
		if (cval == NULL || ckey == NULL)
			return (0);
		if (ht->array[idx] == NULL)
		{
			ht->array[idx] = malloc(sizeof(hash_node_t));
			if (ht->array[idx] == NULL)
				return (0);
			ht->array[idx]->value = cval;
			ht->array[idx]->key = ckey;
			ht->array[idx]->next = NULL;
			return (1);
		}
		else
		{
			temp = ht->array[idx];
			while (temp->next != NULL)
			{
				if (strcmp(temp->key, key) == 0)
				{
					temp->value = cval;
					return (1);
				}
				temp = temp->next;
			}
			new = malloc(sizeof(hash_node_t));
			if (new == NULL)
				return (0);
			new->key = ckey;
			new->value = cval;
			new->next = NULL;
			temp->next = new;
			return (1);
		}
	}
	return (0);
}
