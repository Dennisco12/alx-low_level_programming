#include "hash_tables.h"

/**
 * hash_table_create - This function creates a hash table
 * @size: This is the sie of the array
 * Return: A pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new;
	unsigned long int i;
	unsigned long int n = size;

	new = malloc(sizeof(hash_table_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->size = n;
	new->array = malloc(sizeof(hash_node_t) * n);
	if (new->array == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (i < n)
	{
		new->array[i] = NULL;
		i++;
	}

	return (new);
}
