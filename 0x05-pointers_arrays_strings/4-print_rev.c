#include "main.h"
/**
 * print_rev - function that prints a string in reverse
 * @s: input array
 * Return: 0
 */

void print_rev(char *s)
{
	int i, j;

	i = 0;
	while (s[i])
		i++;

	for (j = i; j > 0; j--)
	{
		_putchar (s[j]);
	}
	_putchar ('\n');
}
