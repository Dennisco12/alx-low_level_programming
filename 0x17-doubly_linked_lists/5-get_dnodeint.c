#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a list
 * @head: The list
 * @index: The index
 * Return: a node at the index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int count;

	count = 0;

	while (head->prev != NULL)
	{
		head = head->prev;
	}

	temp = head;
	while (temp)
	{
		temp = temp->next;
		count++;
		if (count == index)
			return (temp);
	}
	return (NULL);
}
