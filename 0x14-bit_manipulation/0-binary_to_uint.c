#include "main.h"

/**
<<<<<<< HEAD
 * _strlen - returns length of string (modified)
 * @s: string (const)
 * Return: length of string
 */

int _strlen(const char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	return (len);
}

/**
 * power - exponents
 * @base: base
 * @exp: exponent
 * Return: result (int)
 */

int power(int base, int exp)
{
	int i, num;

	num = 1;
	for (i = 0; i < exp; ++i)
		num *= base;

	return (num);
}

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary
 * Return: unsigned int
=======
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
>>>>>>> 522e8e7af40b0c47cf9358a08205408d7d7e92bd
 */

unsigned int binary_to_uint(const char *b)
{
<<<<<<< HEAD
	unsigned int sum;
	int length, i;

	sum = 0;
	if (b == NULL)
		return (sum);
	length = _strlen(b);
	for (i = length - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		sum += (b[i] - '0') * power(2, length - i - 1);
	}
	return (sum);
=======
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
>>>>>>> 522e8e7af40b0c47cf9358a08205408d7d7e92bd
}
