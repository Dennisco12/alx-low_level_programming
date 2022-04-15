#include "main.h"

/**
 * print_line - entry point
 * @n: input value
 * return: always 0
 */

void print_line(int n)
{
	int i;
	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar ('_');
		}
	}
	else
	_putchar ('\n');
}
