#include "main.h"

/**
 * print_rev - function that prints the reverse of a string
 * @s: input string
 * Return: 0
 */

void print_rev(char *s)
{
	int i, n;

	n = 0;
	while (s[n])
		n++;

	for (i = n - 1; i >= 0; i--)
	{
		_putchar (s[i]);
	}
	for (n = 0; s[n] != '\n'; n++)
	{
		continue;
	}
	_putchar ('\n');
	return;
}
