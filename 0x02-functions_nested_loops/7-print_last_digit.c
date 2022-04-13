#include "main.h"

/**
 * print_last_digit - entry point
 * description: function that prints the last digit of an input
 * @n: input value
 * Return: always 0
 */

int print_last_digit(int n)
{
	int d;
	if (n < 0)
	{
		d = (-1 * (n % 10));
			_putchar (d + '0');
			return (0);
	}

	else
	{
		d = (n % 10);
			_putchar (d + '0');
		return (0);
	}
}
