#include "main.h"

/**
 * reverse_array - A function that reverses the elements of an array
 * @a: the array
 * @n: the number of elements to reverse
 */

void reverse_array(int *a, int n)
{
	int i, j, result;

	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			result = a[j];
			a[j] = a[j - 1];
			a[j - 1] = result;
		}
	}
}
