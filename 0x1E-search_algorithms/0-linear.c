#include "search_algos.h"
/**
 * linear_search - This searches for a value in an array of integers
 * @array: This is the array to be searched
 * @size: The size of the array
 * @value: The value to be searched for
 *
 * Return: The first index where the value is found
 */

int linear_search(int *array, size_t size, int value)
{
	size_t n = 0;

	if (array == NULL)
		return (-1);

	while (n < size)
	{
		printf("Value checked array[%ld] = [%d]\n", n, array[n]);
		if (array[n] == value)
			return (n);
		n++;
	}
	return (-1);
}
