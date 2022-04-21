#include "main.h"

/**
 * puts_half - a function that prints half of a string
 * @str: a pointer
 * return: 0
 */

void puts_half(char *str)
{
	int n, i, j;

	n = 0;
	while (str[n])
		n++;
	if (n % 2 == 0)
	{
		i = n / 2;
		for (j = i + 1; j <= n; j++)
		{
			_putchar (str[i]);
			i++;
		}
	}
	else
	{
		i = (n - 1) / 2;
		for (j = i + 1; j <= n; j++)
		{
			_putchar (str[i]);
			i++;
		}
	}
	_putchar ('\n');
	return;
}
