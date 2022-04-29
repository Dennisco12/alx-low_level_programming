#include "main.h"

/**
 * is_prime_number - A function that identifies a prime number
 * @n: the input integer
 * Return: 0 if not prime, 1 if otherwise
 */

int is_prime_number(int n)
{
	int j;

	if (n < 2)
	{
		return (0);
	}
	for (j = 2; j < n; j++)
	{
		if (n % j != 0)
			return (1);
	}
	return (0);
}
