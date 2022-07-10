#include "lists.h"

/**
 * add_dnodeint - A function that adds a new node at the beginning of a list
 * @head: The initial list
 * @n: data of the added node
 * Return: address of new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp;
	dlistint_t *new;

	temp = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == 0)
		return (NULL);

	new->n = n;
	if (!(*head))
	{
		*head = new;
		new->next = NULL;
		new->prev = NULL;
		return (new);
	}
	new->next = temp;
	temp->prev = new;
	*head = new;

	return (new);
}
