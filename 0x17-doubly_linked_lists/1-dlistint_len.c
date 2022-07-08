#include "lists.h"

/**
 * dlistint_len - A function that returns the length of elements in a list
 * @h: The list
 * Return: The length of the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	int nodes = 0;

	while (h)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
