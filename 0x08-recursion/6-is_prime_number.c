#include "main.h"

/**
 * _evaluate - A function that identifies a prime number
 * @n: the input integer
 * @j: An iterative parameter
 * Return: 0 if not prime, 1 if otherwise
 */

int _evaluate(int n, int j)
{
	if (j == n - 1)
	{
		return (1);
	}

	else if (n % j == 0)
	{
		return (0);
	}

	if (n % j != 0)
	{
		return (_evaluate(n, j + 1));
	}

	return (0);

}

/**
 * is_prime_number - A function that identifies a prime number
 * @n: the integer
 * Return: _evaluate
 */

int is_prime_number(int n)
{
	int j;

	j = 2;

	if (n < 2)
	{
		return (0);
	}

	if (n == 2)
	{
		return (1);
	}

	return (_evaluate(n, j));
}
