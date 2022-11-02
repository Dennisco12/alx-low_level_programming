#include <math.h>
#include "search_algos.h"

/**
 * jump_list - This searches for value in a sorted singly linked list
 * @list: A pointer to the head of the list
 * @size: The number of nodes in list
 * @value: The value been searched for
 * Return: A pointer to the first node where value is found
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step, idx, check = 0;
	listint_t *temp, *prev;

	if (list == NULL)
		return (NULL);
	step = (sqrt(size) / 1);
	temp = list;
	while (temp->n < value && check < size)
	{
		prev = temp;
		idx = 0;
		while (idx < step)
		{
			temp = temp->next;
			idx++;
		}
		if (temp->index < size)
		{
			printf("Value checked at index [%ld] = [%d]\n",
					temp->index, temp->n);
		}
		else
			break;
		check++;
	}
	printf("Value found between indexes [%ld] and [%ld]\n",
			prev->index, temp->index);
	while (prev->index < temp->index)
	{
		printf("Value checked at index [%ld] = [%d]\n",
				prev->index, prev->n);
		if (prev->n == value)
			return (prev);
		prev = prev->next;
	}
	return (NULL);
}
