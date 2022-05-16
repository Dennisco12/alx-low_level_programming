#include <stdio.h>
#include <stdlib.h>

/**
 * int_index - searches for an int
 * @array: the array to be searched
 * @size: size of the array
 * @cmp: the function
 * Return: -1 if the int is absent, or if size < 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || !cmp)
		return (-1);

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
