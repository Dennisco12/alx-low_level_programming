#include "lists.h"

/**
 * add_node_end - Afunction that adds a new node at the end of a list_t list
 * @head: The head of the singly linked list
 * @str: The string that needs to be duplicated
 * Return: the address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;
	size_t n;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	n = 0;
	while (str[n])
		n++;

	new->len = n;
	new->next = NULL;
	temp = *head;

	if (temp == NULL)
		*head = new;
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}

	return (*head);
}
