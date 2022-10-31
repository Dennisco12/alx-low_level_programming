#include "search_algos.h"

/**
 * search_half - This divides the array into 2 and searches
 * the required side of the array
 *
 * @array:The array to be searched
 * @first: The index of the first element to be searched in the array
 * @last: The index of the last element to be searched in the array
 * @value: The value to be searched
 * Return: The index of the found value if any
 */

size_t search_half(int *array, size_t first, size_t last, int value)
{
	size_t n = ((first + last) / 2);
	size_t m = first + 1;

	if (first > last)
		return (-1);

	printf("Searching in array: %d", array[first]);
	while (m <= last)
	{
		printf(", ");
		printf("%d", array[m]);
		m++;
	}
	printf("\n");

	if (array[n] == value)
		return (n);

	else if (array[n] > value)
		return (search_half(array, first, n - 1, value));
	else
		return (search_half(array, n + 1, last, value));
}

/**
 * binary_search - This searches for a value in a sorted array
 * of integers using the binary search algorithm
 *
 * @array: This is the array to be searched
 * @size: This is the size of the array
 * @value: This is the value to search for
 * Return: The index where value is located
 */

int binary_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	return (search_half(array, 0, size - 1, value));
}
