#include "main.h"
#include <stdio.h>

/**
 * print_array - function that prints the n elements of an array
 * @a: the input array
 * @n: the number of elements
 * Return: 0
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
