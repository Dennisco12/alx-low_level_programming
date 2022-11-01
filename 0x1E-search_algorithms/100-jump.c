#include "search_algos.h"
#include <math.h>
/**
 * jump_search - This searches for an eleemnt in a sorted array
 * using the jump algorithm
 *
 * @array: The array to be searched
 * @size: The size of array
 * @value: The value been searched for
 * Return: The first index where value is found
 */

int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size);
	size_t n = 0, pre;

	step = step / 1;
	if (array == NULL)
		return (-1);

	while (array[n] < value && n < size)
	{
		printf("Value checked array[%ld] = [%d]\n", n,
				array[n]);
		n += step;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", n - step, n);

	pre = n - step;
	while (pre <= n && pre < size)
	{
		printf("Value checked array[%ld] = [%d]\n", pre, array[pre]);
		if (array[pre] == value)
			return (pre);
		pre++;
	}

	return (-1);
}
