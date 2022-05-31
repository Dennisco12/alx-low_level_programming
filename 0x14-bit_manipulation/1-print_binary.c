#include "main.h"

/**
 * print_binary - prints the binary representation of a number
<<<<<<< HEAD
 * @n: integer
 * Return: void
=======
 * @n: the number to be converted
>>>>>>> 522e8e7af40b0c47cf9358a08205408d7d7e92bd
 */

void print_binary(unsigned long int n)
{
<<<<<<< HEAD
	int on, i;
	unsigned long int x;

	on = 0;
	for (i = 63; i >= 0; i--)
	{
		x = (n >> i) & 1;
		if (x == 1)
			on = 1;
		if (on == 1)
			_putchar(((n >> i) & 1) + '0');
	}
	if (n == 0)
		_putchar('0');
=======
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
>>>>>>> 522e8e7af40b0c47cf9358a08205408d7d7e92bd
}
