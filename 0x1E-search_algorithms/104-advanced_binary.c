#include "search_algos.h"

/**
 * binary_searcher - This searches for value in an array
 * @array: The array been searched
 * @low: The index of the first element in the array to begin search
 * @high: The index of the last element to end search
 * @value: The value been searched for
 * Return: The index of the first value found
 */

int binary_searcher(int *array, size_t low, size_t high, int value)
{
	size_t mid, idx = low + 1, k;

	if (low > high)
	{
		if (array[low] == value)
			return (low);
		else if (array[high] == value)
			return (high);
		else
			return (-1);
	}

	printf("Searching in array: %d", array[low]);
	while (idx <= high)
	{
		printf(", %d", array[idx]);
		idx++;
	}
	printf("\n");

	mid = (high + low) / 2;
	if (array[mid] == value)
	{
		k = mid - 1;
		if (array[k] == value && k > 0)
			return (binary_searcher(array, low, mid, value));
		return (mid);
	}
	if (array[mid] < value)
		return (binary_searcher(array, mid + 1, high, value));
	else
		return (binary_searcher(array, low, mid - 1, value));
}

/**
 * advanced_binary - This searches for a value in an ordered
 * array of ints using the advanced binary search algorthm
 *
 * @array: The array been searched
 * @size: the size of the array
 * @value: The value been searched
 * Return: The irst index of value found
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	return (binary_searcher(array, 0, size - 1, value));
}
