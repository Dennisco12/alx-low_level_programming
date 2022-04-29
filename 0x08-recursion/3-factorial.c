#include "main.h"

/**
 * factorial - A function that prints the factorial of an integer
 * @n: The input value
 * Return: -1 if n is less than 1, and return factorial otherwise
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
