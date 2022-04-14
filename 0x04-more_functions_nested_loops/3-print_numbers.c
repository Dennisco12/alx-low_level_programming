#include "main.h"

/**
 * print_numbers - entry point
 * Return: always 0
 */

void print_numbers(void);
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		_putchar (n);
	}
	putchar ('\n');
}
