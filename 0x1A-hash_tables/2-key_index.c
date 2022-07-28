#include "hash_tables.h"

/**
 * key_index - A function that gives the index of a key
 * @key: This is the key
 * @size: This is the size of the array
 * Return: the index at which the key/value pair should be stored
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int n, idx;

	n = hash_djb2(key);
	idx = n % size;

	return (idx);
}
