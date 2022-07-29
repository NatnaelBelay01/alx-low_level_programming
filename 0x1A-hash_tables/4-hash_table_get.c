#include "hash_tables.h"

/**
 * hash_table_get - a function that fetches the balue stored in a hash table
 * @ht: the hash table
 * @key: the key value
 * Return: the value stored in the hash table
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *temp;
	unsigned long int idx;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	idx = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[idx];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			return (temp->value);
		}
		temp = temp->next;
	}
	return (NULL);
}
