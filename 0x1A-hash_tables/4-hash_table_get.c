#include "hash_tables.h"

/**
 * hash_table_get - A function that retrieves the value
 * associated with a key
 * @ht: The hash table to look into
 * @key: The key of whose value we want to retrieve
 * Return: The value associated with the key or Null if
 * key can't be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx, n;
	char *key_string;

	idx = key_index((const unsigned char *)key, ht->size);
	key_string = strdup(key);

	n = 0;
	while (n < ht->size)
	{
		if (n == idx)
		{
			while (ht->array[n] != NULL)
			{
				if (strcmp(ht->array[n]->key, key_string) == 0)
					return ht->array[n]->value;
				ht->array[n] = ht->array[n]->next;
			}
			return (NULL);
		}
		n++;
	}
	return (NULL);
}
