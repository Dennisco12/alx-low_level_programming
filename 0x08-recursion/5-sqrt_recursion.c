#include "main.h"

/**
 * _sqrt_recursion - A function that return the natural square root of a number
 * _evaluate - Function that evaluate root
 * @n: The natural number
 * Return: The root of the n, and -1 if it does not have a natural root
 */

int _evaluate(int i, int n)
{
	if (n == 1 || n == 0)
		return (n);

	else if (i * i < n)
		return (_evaluate(i + i, n));

	else if (i * i == n)
		return (i);

	return (-1);
	return (-1);

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
}
