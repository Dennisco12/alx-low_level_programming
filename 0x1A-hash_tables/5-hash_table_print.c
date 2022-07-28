#include "hash_tables.h"

/**
 * hash_table_print - A function that prints a hash table
 * @ht: The hash table to be printed
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int n = 0;

	printf("{");
	while (n < ht->size)
	{
		if (ht->array[n] == NULL)
			continue;
		else
		{
			printf("'%s': '%s', ", ht->array[n]->key, ht->array[n]->value);
			continue;
		}
		n++;
	}
	n = 0;
	while (n < ht->size)
	{
		if (ht->array[n] == NULL)
			continue;
		else
		{
			ht->array[n] = ht->array[n]->next;
			while (ht->array[n] != NULL)
			{
				printf("'%s': '%s', ", ht->array[n]->key, ht->array[n]->value);
				ht->array[n] = ht->array[n]->next;
			}
		}
		n++;
	}
	printf("}");
}
