#include "hash_tables.h"

/**
 * hash_table_create - a function that creates a hash table
 * @size: the size of the table
 * Return: a pointer to the table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i = 0;
	hash_table_t *table;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);
	table->size = size;
	table->array = malloc(sizeof(hash_node_t *) * size);

	if (table->array == NULL)
		return (NULL);
	while (i < size)
	{
		table->array[i] = NULL;
		i++;
	}
	return (table);
}
