#include "main.h"

/**
 * print_numbers - entry point
 * Return: always 0
 */

void print_numbers(void)
{
	int n;

	n = 0;

	for (n = 0; n < 10; n++)
	{
		_putchar (n + '0');
	}
	_putchar ('\n');
}
