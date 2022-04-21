#include "main.h"

/**
 * puts2 - function prints the first element, followed by the rhird and so on
 * @str: input pointer
 * @n: input value
 * @j: input value
 * return: 0
 */

void puts2(char *str)
{
	int n, j;

	n = 0;
	while (str[n])
		n++;
	for (j = 0; j <= n; j += 2)
	{
		_putchar (str[j]);
	}
	_putchar('\n');
}
