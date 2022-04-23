#include "main.h"

/**
 * rev_string - function that reverses a string
 * @i: input order
 * @j: reversed order
 * Return: 0
 */

void rev_string(char *s)
{
	int i, j;

	i = 0;
	while (s[i])
		i++;
	for (j = i; j >= 0; j--)
	{
		_putchar (s[j]);
	}
	_putchar ('\n');
}
