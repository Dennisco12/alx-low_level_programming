#include "main.h"

/**
 * peint_diagsums - prints sum of diagonals of a square matrix
 * @a: the matrix
 * @size: length of matrix
 * Return: sum
 */

void print_diagsums(int *a, int size)
{
	int i, j;

	i = j = 0;
	while (a[size][size])
	{
		size++;
	}
