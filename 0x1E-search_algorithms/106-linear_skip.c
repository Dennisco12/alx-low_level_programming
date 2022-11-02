#include "search_algos.h"

/**
 * count_list - This counts the number of elements in a list
 * @list: The pointer to the head of the list
 * Return:The number of nodes in the list
 */
size_t count_list(skiplist_t *list)
{
	skiplist_t *temp;
	size_t idx = 0;

	temp = list;
	while (temp)
	{
		idx++;
		temp = temp->next;
	}
	return (idx);
}

/**
 * linear_skip - This searches forvalue in a sotred list of integers
 *
 * @list: This a pointer to the head of the list
 * @value: the value to be searched for
 * Return: the pointer to the first location where value is found
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *temp, *prev;
	size_t idx;

	if (list == NULL)
		return (NULL);

	temp = list;
	idx = count_list(list);
	while (temp->n < value)
	{
		if (temp->index < idx)
		{
			prev = temp;
			if (temp->express->index < idx)
				temp = temp->express;
			else
			{
				temp = prev;
				while (temp)
					temp = temp->next;
			}
		}

		printf("Value checked at index [%ld] = [%d]\n",
				temp->index, temp->n);
	}
		
	printf("Value found between indexes [%ld] and [%ld]\n",
			prev->index, temp->index);
	while (prev->index <= temp->index)
	{
		printf("Value checked at index [%ld] = [%d]\n",
				prev->index, prev->n);
		if (prev->n == value)
			return (prev);
		prev = prev->next;
	}
	return (NULL);
}
