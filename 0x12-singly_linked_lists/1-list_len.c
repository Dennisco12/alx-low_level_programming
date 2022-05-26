#include "lists.h"

/**
 * list_len - A function that returns number of elements in a link
 * @h: The singly linked list
 * Return: number of elements in the link
 */

size_t list_len(const list_t *h)
{
	size_t elem = 0;

	while (h != NULL)
	{
		h = h->next;
		elem++;
	}
	return (elem);
}
