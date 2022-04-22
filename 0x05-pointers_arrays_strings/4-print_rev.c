#include "main.h"

/**
 * print_rev - function that prints the reverse of a string
 * @i: final order of elements
 * @s: input string
 * @n: intial order of elements
 * Return: 0
 */

void print_rev(char *s)
{
	int i, n;

	n = 0;
	while (s[n])
		n++;
	{
		for (i = n; i >= 0; i--)
			_putchar (s[i]);
	}
	_putchar ('\n');
	return;
}
