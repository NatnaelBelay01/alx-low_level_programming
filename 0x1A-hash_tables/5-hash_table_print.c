#include "hash_tables.h"

/**
 * hash_table_print - a function that prints the contents of a hash table
 * @ht: the hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp;
	unsigned long int i;
	int stat = 0;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		if (stat != 0 && temp != NULL)
			printf(", ");
		while (temp != NULL)
		{
			stat = 1;
			printf("\'%s\': \'%s\'", temp->key, temp->value);
			if (temp->next != NULL)
				printf(", ");
			temp = temp->next;
		}
	}
	printf("}\n");
}
