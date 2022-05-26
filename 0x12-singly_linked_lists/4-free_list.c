#include "lists.h"

/**
 * free_list - A function that frees a list
 * @head: the head of the list
 */

void free_list(list_t *head)
{
	list_t *current;
	while ((current = head) != NULL)
	{
		head = head->next;
		free(current->str);
		free(current);
	}
}
