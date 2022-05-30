#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to be converted
 */

void print_binary(unsigned long int n)
{
	int i, k = 0, j = 0;

	i = 63;
	while (i >= 0)
	{
		j = (n >> i) & 1;
		if (j == 1)
			k = 1;

		if (k == 1)
			_putchar (((n >> i) & 1) + '0');
		i--;
	}
	if (n == 0)
		_putchar ('0');
}
