#include "lists.h"

/**
 * print_dlistint - A function thatprints the data of a list
 * @h: The list
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
