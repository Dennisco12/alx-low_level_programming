#include "main.h"

/**
 * puts_half - a function that prints half of a string
 * @str: a pointer
 * return: 0
 */

void puts_half(char *str)
{
	int i, j;

	i = 0;

	while (str[i])
		i++;
	j = i / 2;
	if (i % 2)
		j += 1;
	while (j < 1)
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
