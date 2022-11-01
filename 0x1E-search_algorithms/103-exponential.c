#include "search_algos.h"
/**
 * exponential - This performs a search operation on a sorted array
 * using the exponential search algorithm
 *
 * @array: The array to be searched
 * @size: The size of array
 * @value: The value been searched for
 * Return:The first index where value is found and -1 if not found
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t n = 1, m;

	if (array == NULL)
		return (-1);
	while (array[n] < value)
	{
		printf("Value checked array [%ld] = [%d]\n", n, array[n]);
		n *= 2;
	}

	m = n / 2;
	if (n >= size)
		n = size - 1;

	printf("Value found between indexes [%ld] and [%ld]\n", m, n);
	return (binary_recursive_search(array, m, n, value));
}


/**
 * binary_recursive_search - This uses binary search algorithm
 * to seach for value
 * @array: The array to search
 * @low: The index of the lower value to search
 * @high: The index of the higher value to search
 * @value: the value been searched
 * Return: the index of value if found, -1 if otherwise
 */

int binary_recursive_search(int *array, size_t low, size_t high, int value)
{
	size_t mid, idx = low + 1;

	if (low > high)
		return (-1);

	mid = (low + high) / 2;
	printf("Searching in array: %d", array[low]);
	while (idx <= high)
	{
		printf(", %d", array[idx]);
		idx++;
	}
	printf("\n");

	if (array[mid] == value)
		return (mid);

	if (array[mid] < value)
		return (binary_recursive_search(array, mid + 1, high, value));
	else
		return (binary_recursive_search(array, low, mid - 1, value));
}
