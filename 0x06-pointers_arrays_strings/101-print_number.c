#include "main.h"

/**
 * print_number - A function that prints an integer
 * @n: the integer to be printed
 */

void print_number(int n)
{
	int i, j, m;

	if (n < 0)
	{
		_putchar ('-');
		i = n * -1;
	}
	else
	{
		i = n;
	}
	j = i;
	m = 1;
	while (j > 9)
	{
		j /= 10;
		m *= 10;
	}
	for (; m >= 1; m /= 10)
	{
		_putchar(((i / m) % 10) + 48);
	}
}
