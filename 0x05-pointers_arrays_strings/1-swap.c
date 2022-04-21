#include "main.h"

/**
 * swap_int - a function that swaps the value of two integers
 * Return: always 0.
 */

void swap_int(int *a, int *b)
{
	int x;

		x = *a;
		*a = *b;
		*b = x;
		return;
}
