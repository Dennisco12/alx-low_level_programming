#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at an index
 * @h: The list
 * @idx: The index
 * @n: the data
 * Return: The new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node, *front;
	dlistint_t *new;
	unsigned int count = 0;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	node = *h;
	front = node->next;
	while (node)
	{
		count++;
		front = node->next;
		if (count == idx)
		{
			node->next = new;
			new->prev = node;
			front->prev = new;
			new->next = front;
			return (new);
		}
		node = node->next;
	}
	return (NULL);
}
