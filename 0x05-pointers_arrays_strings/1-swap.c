#include "main.h"

/**
 * swap_int - a fuction that swaps the value of two integers
 * @a: used variable
 * @b: used variable
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;

	*a = *b;
	*b = c;
}
