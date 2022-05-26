#include "lists.h"

/**
 * add_node - A function that adds a new node at he beginning of a list
 * @head: the beginning of the list
 * @str: the string that needs to be duplicated
 * Return: the address of the new element or NULL if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *elem;
	size_t temp;

	new = malloc(sizeof(list_t));
	if (elem == NULL)
		return (NULL);

	elem->str = strdup(str);
	temp = 0;
	while (str[temp])
		temp++;

	new->len = temp;
	new->next = *head;
	*head = new;

	return(*head);
}
