#include "main.h"

/**
 * puts2 - function prints the first element, followed by the rhird and so on
 * @str: input pointer
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
	for (n = 0; str[n] == '\0'; n++)
	{
		continue;
	}
	_putchar('\n');
}
