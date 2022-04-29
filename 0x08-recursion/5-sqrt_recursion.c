#include "main.h"

/**
 * _evaluate - Function that evaluate root
 * @n: The natural number
 * @i: An iterative parameter
 * Return: The root of the n, and -1 if it does not have a natural root
 */

int _evaluate(int i, int n)
{
	if (n == 1 || n == 0)
		return (n);

	else if (i * i < n)
		return (_evaluate(i + 1, n));

	else if (i * i == n)
		return (i);

	return (-1);
	return (-1);
}

/**
 * _sqrt_recursion - A function that return the natural square root of a number
 * @n: An integer
 * Return: _evaluate
 */

int _sqrt_recursion(int n)
{
	int i = 0;

	if (i < 0)
		return (-1);

	else
	{
		return (_evaluate(i, n));
	}
}
