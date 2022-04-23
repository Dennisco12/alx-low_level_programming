#include "main.h"

/**
 * puts_half - a function that prints the second half of a string
 * @str: the string
 */

void puts_half(char *str)
{
	int n, i;

	n = 0;
	while (str[n])
		n++;

	if (n % 2 == '0')
	{
		i = n / 2;
		for (i = (n / 2) + 1; i < n; i++)
			_putchar (str[i]);
	}
	else
	{
		i = (n - 1) / 2;
		for (i = ((n - 1) / 2) + 1; i < n; i++)
			_putchar(str[i]);
	}
	_putchar ('\n');
}
