#include "main.h"
#include <stdio.h>

/**
 * print_array - prints the elements of an array
 * @a: input pointer
 * @n: input value
 * return: always 0
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
