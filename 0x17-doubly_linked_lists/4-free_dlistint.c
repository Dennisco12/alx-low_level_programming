#include "lists.h"

/**
 * free_dlistint - A function that frees a list
 * @head: the list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	temp = head;
	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	free(head);
}
