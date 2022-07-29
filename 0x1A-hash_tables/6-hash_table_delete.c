#include "hash_tables.h"

/**
 * hash_table_delete - A function that deletes a hash table
 * @ht: The hash table to be deleted
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int n;
	hash_node_t *tmp;

	n = 0;
	while (n < ht->size)
	{
		if (ht->array[n] != NULL)
		{
			while (ht->array[n] != NULL)
			{
				tmp = ht->array[n]->next;
				free(ht->array[n]->key);
				free(ht->array[n]->value);
				free(ht->array[n]);
				ht->array[n] = tmp;
			}
		}
		n++;
	}

	free(ht->array);
	free(ht);
}
