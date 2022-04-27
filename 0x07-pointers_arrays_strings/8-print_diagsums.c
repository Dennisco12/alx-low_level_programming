#include "main.h"

/**
 * print_diagsums - prints sum of diagonals of a square matrix
 * @a: the matrix
 * @size: length of matrix
 * Return: sum
 */

void print_diagsums(int *a, int size)
{
	int i, j, sum1, sum2;

	size = 0;
	while (a[size][size])
	{
		size++;
	}

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			sum1 = 0;
			sum2 = 0;
			if (i = j)
				sum1  = sum1 + a[i][j];
		}
	}
