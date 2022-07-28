#include "hash_tables.h"

/**
 * hash_table_set - A function that adds an element to the hash table
 * @ht: The hash table
 * @key: The key to be added
 * @value: The value associated with the key
 * Return: 1 if it succeeds and 0 if otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx, n;
	hash_node_t *key_node;

	key_node = malloc(sizeof(hash_node_t));
	if (key_node == NULL)
		return (0);

	if (key == NULL)
		return (0);
	key_node->key = strdup(key);
	key_node->value = strdup(value);
	key_node->next = NULL;

	idx = key_index((const unsigned char *)key, ht->size);

	n = 0;
	while (n < ht->size)
	{
		if (idx == n)
		{
			if (ht->array[n] == NULL)
			{
				ht->array[n] = key_node;
				return (1);
			}
			else
			{
				ht->array[n]->next = key_node;
				return (1);
			}
		}
		n++;
	}
	return (0);
}
