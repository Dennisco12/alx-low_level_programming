#include "main.h"

/**
 * puts2 - a function that prints every other character of a string
 * @str: an input string
 * Return: 0
 */

void puts2(char *str)
{
	int i, j;

	i = 0;
	j = 0;
	while (str[i++])
	{
		j++;
	}
	for (j = 0; j < i; j += 2)
	{
		_putchar (str[j]);
	}
	_putchar ('\n');
}
