#include "hash_tables.h"

/**
 * hash_table_print - A function that prints a hash table
 * @ht: The hash table to be printed
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int n = 0;
	hash_node_t *node;
	unsigned char flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	while (n < ht->size)
	{
		if (ht->array[n] != NULL)
		{
			if (flag == 1)
				printf(", ");

			node = ht->array[n];
			while (node != NULL)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				if (node != NULL)
					printf(", ");
			}
			flag = 1;
		}
		n++;
	}
	printf("}\n");
}
