#include "main.h"

/**
 * power - Finds the exponenet of a base
 * @b: base
 * @e: exponent
 * Return: the solution
 */
int power(int b, int e)
{
	int ans = 1;

	if (e == 0)
	{
		return (1);
	}
	else
	{
		while (e > 0)
		{
			ans = ans * b;
			e--;
		}
	}
	return (ans);
}

/**
 * binary_to_uint - Converts binary numbers to unsigned int
 * @b: A pointer pointing to a string of 0 and 1
 * Return: The converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	int k = 0, n = 0, m = 0, j, i;

	while (b[n] != '\0')
		n++;

	i = n - 1;
	while (i >= 0)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		j = power(2, m);
		k = k + ((b[i] - '0') * j);
		m++;
		i--;
	}
	return (k);
}
