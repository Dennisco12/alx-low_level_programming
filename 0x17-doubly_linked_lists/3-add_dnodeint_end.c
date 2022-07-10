#include "lists.h"

/**
 * add_dnodeint_end - Addsnode at the end of a list
 * @head: the list
 * @n: the data to be added
 * Return: The new element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp;
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	if (!(*head))
	{
		new->next = NULL;
		new->prev = NULL;
		*head = new;
		return (new);
	}

	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;

	temp->next = new;
	new->prev = temp;
	new->next = NULL;

	return (new);
}
