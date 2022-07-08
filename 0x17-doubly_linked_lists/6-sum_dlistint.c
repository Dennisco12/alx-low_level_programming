#include "lists.h"

/**
 * sum_dlistint - Find the sum of all the data in a list
 * @head: The list
 * Return: The sum
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *temp;

	while (head->prev != NULL)
		head = head->prev;

	temp = head;
	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
