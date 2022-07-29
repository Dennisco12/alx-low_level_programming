#include "hash_tables.h"

/**
 * shash_table_create - This creates a sorted hash table
 * @size: The size of the created table
 * Return: pointer to the newly created table
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new_hash;
	unsigned long int n = size, i;

	new_hash = malloc(sizeof(shash_table_t));
	if (new_hash == NULL)
		return (NULL);

	new_hash->size = n;
	new_hash->array = malloc(sizeof(shash_node_t) * n);
	if (new_hash->array == NULL)
		return (NULL);

	for (i = 0; i < n; i++)
		new_hash->array[i] = NULL;

	new_hash->shead = NULL;
	new_hash->stail = NULL;

	return (new_hash);
}


/**
 * shash_table_set - This adds a key/value pair to the
 * appropriate position on a hash table
 * @ht: The hash table
 * @key: The key to be added
 * @value: The value corresponding to the key
 * Return: 1 if success and 0 if otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int n, idx, i;
	char *key_copy, *value_copy;
	shash_node_t *node, *head, *exist;

	node = malloc(sizeof(shash_node_t));
	if (node == NULL)
		return (0);

	n = ht->size;
	key_copy = strdup(key);
	value_copy = strdup(value);
	idx = key_index((const unsigned char *)key_copy, n);

	node->key = key_copy;
	node->value = value_copy;
	node->next = NULL;

	if (ht->shead == NULL)
	{
		node->sprev = NULL;
		node->snext = NULL;
		ht->shead = node;
		ht->stail = node;
	}
	else
	{
		head = ht->shead;
		while (head->snext != NULL)
			head = head->snext;

		head->snext = node;
		node->sprev = head;
		node->snext = NULL;
		ht->stail = node;
	}

	i = 0;
	while (i < n)
	{
		if (i == idx)
		{
			if (ht->array[i] != NULL)
			{
				exist = ht->array[i];
				while (exist != NULL)
					exist = exist->next;
				exist->next = node;
				return (1);
			}
			ht->array[i] = node;
			return (1);
		}
		i++;
	}
	return (0);
}


/**
 * shash_table_get - The return the value of the given key
 * @ht: The hash table
 * @key: The key to be searched
 * Return: The string value corresponding to the given key
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int n, idx;
	shash_node_t *node;
	char *key_copy;

	n = ht->size;
	key_copy = strdup(key);
	idx = key_index((const unsigned char *)key_copy, n);

	node = ht->array[idx];
	while (node != NULL)
	{
		if (strcmp(node->key, key_copy) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);
}


/**
 * shash_table_print - This prints a hash table
 * @ht: The hash table
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node;

	printf("{");
	node = ht->shead;
	while (node != NULL)
	{
		printf("'%s': '%s'",  node->key, node->value);
		if (node->snext != NULL)
			printf(", ");
		node = node->snext;
	}
	printf("}\n");
}


/**
 * shash_table_print_rev - This print a sorted hash table in reversed order
 * @ht: The sorted hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node;

	printf("{");
	node = ht->stail;
	while (node != NULL)
	{
		printf("'%s': '%s'", node->key, node->value);
		if (node->sprev != NULL)
			printf(", ");
		node = node->sprev;
	}
	printf("}\n");
}


/**
 * shash_table_delete - This deletes a hash table
 * @ht: The sorted hash table
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *temp, *node;

	node = ht->shead;
	while (node != NULL)
	{
		temp = node->snext;
		free(node->key);
		free(node->value);
		free(node);
		node = temp;
	}
	free(node);
	free(ht);
}
