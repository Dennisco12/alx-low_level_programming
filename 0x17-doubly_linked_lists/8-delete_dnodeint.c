#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at index
 * @head: the list
 * @index: The index
 * Return: 1 if successful, -1 if otherwise
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *node, *back;

	node = *head;

	if (node != NULL)
	{
		while (node->prev != NULL)
			node = node->prev;
	}

	while (node != NULL)
	{
		if (count == index)
		{
			if (index == 0)
			{
				*head = node->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				back = node->prev;
				back->next = node->next;
				if (node->next != NULL)
					(node->next)->prev = back;
			}
			free(node);
			return (1);
		}
		back = node;
		node = node->next;
		count++;
	}
	return (-1);
}
