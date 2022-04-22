#include "main.h"

/**
 * print_rev - function that prints the reverse of a string
 * @s: input string
 * Return: 0
 */

void print_rev(char *s)
{
	int i, n;

	for (n = 0; s[n] != '\n'; n++)
	{
		continue;
	}

	i = n - 1;
	for (i = n; i >= 0; i--)
	{
		_putchar (s[i]);
	}
	_putchar ('\n');
	return;
}
