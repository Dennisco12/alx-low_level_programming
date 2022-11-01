#include "search_algos.h"

/**
 * recurse_search - This helps computing the probe position
 * @array: the array to be searched
 * @low: The index of the first element in array to search
 * @high: The index of the last element in array to search
 * @value: The value been searched for
 * Return: The index of the found value if any
 */

int recurse_search(int *array, size_t low, size_t high, int value)
{
	size_t pos;

	pos = low + ((high - low) / (array[high] - array[low])
			* (value - array[low]));
	if (pos > high)
	{
		printf("Value checked array[%ld] is out of range\n", pos);
		return (-1);
	}

	printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);

	if (pos <= high)
	{
		if (array[pos] == value)
			return (pos);

		if (array[pos] > value)
			return (recurse_search(array, low, pos - 1, value));
		else
			return (recurse_search(array, pos + 1, high, value));
	}
	else
		return (-1);
}

/**
 * interpolation_search - This searches for a value using
 * the interpolationsearch algorithm
 *
 * @array: This array to be searched
 * @size: The size of array
 * @value: The value been searched for
 * Return: The first index index where value is located
 */

int interpolation_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	return (recurse_search(array, 0, size - 1, value));
}
